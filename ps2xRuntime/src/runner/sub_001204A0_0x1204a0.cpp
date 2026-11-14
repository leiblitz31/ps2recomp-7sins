#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001204A0
// Address: 0x1204a0 - 0x1206b0
void sub_001204A0_0x1204a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001204A0_0x1204a0");
#endif

    switch (ctx->pc) {
        case 0x1204e4u: goto label_1204e4;
        default: break;
    }

    ctx->pc = 0x1204a0u;

    // 0x1204a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1204a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1204a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1204a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1204a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1204a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1204ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1204acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1204b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1204b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1204b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1204b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1204b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1204b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1204bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1204bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1204c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1204c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1204c4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1204c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1204c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1204C8u;
    {
        const bool branch_taken_0x1204c8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1204c8) {
            ctx->pc = 0x1204D8u;
            goto label_1204d8;
        }
    }
    ctx->pc = 0x1204D0u;
    // 0x1204d0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1204d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1204d4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1204d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1204d8:
    // 0x1204d8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x1204d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1204dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1204DCu;
    {
        const bool branch_taken_0x1204dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1204dc) {
            ctx->pc = 0x1205A8u;
            goto label_1205a8;
        }
    }
    ctx->pc = 0x1204E4u;
label_1204e4:
    // 0x1204e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1204e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1204e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1204ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1204ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1204f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1204f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1204f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1204F4u;
    {
        const bool branch_taken_0x1204f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1204f4) {
            ctx->pc = 0x120508u;
            goto label_120508;
        }
    }
    ctx->pc = 0x1204FCu;
    // 0x1204fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1204fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120500: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x120500u;
    {
        const bool branch_taken_0x120500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120500) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x120508u;
label_120508:
    // 0x120508: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12050c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x120510: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x120514: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120518: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12051c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120520: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120524: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120524u;
    {
        const bool branch_taken_0x120524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120524) {
            ctx->pc = 0x120538u;
            goto label_120538;
        }
    }
    ctx->pc = 0x12052Cu;
    // 0x12052c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120530: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x120530u;
    {
        const bool branch_taken_0x120530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120530) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x120538u;
label_120538:
    // 0x120538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12053c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x120540: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x120544: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120548: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12054c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120550: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120554: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120554u;
    {
        const bool branch_taken_0x120554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120554) {
            ctx->pc = 0x120568u;
            goto label_120568;
        }
    }
    ctx->pc = 0x12055Cu;
    // 0x12055c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120560: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x120560u;
    {
        const bool branch_taken_0x120560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120560) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x120568u;
label_120568:
    // 0x120568: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12056c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x120570: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x120574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120578: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12057c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x12057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120584: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120584u;
    {
        const bool branch_taken_0x120584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120584) {
            ctx->pc = 0x120598u;
            goto label_120598;
        }
    }
    ctx->pc = 0x12058Cu;
    // 0x12058c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120590: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x120590u;
    {
        const bool branch_taken_0x120590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120590) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x120598u;
label_120598:
    // 0x120598: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12059c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1205a0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1205a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1205a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1205a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1205a8:
    // 0x1205a8: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1205A8u;
    {
        const bool branch_taken_0x1205a8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1205a8) {
            ctx->pc = 0x1204E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1204e4;
        }
    }
    ctx->pc = 0x1205B0u;
    // 0x1205b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1205b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1205b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1205b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1205b8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1205b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1205bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1205c0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1205c4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1205C4u;
    {
        const bool branch_taken_0x1205c4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1205c4) {
            ctx->pc = 0x1205D4u;
            goto label_1205d4;
        }
    }
    ctx->pc = 0x1205CCu;
    // 0x1205cc: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1205ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1205d0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1205d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1205d4:
    // 0x1205d4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1205D4u;
    {
        const bool branch_taken_0x1205d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1205d4) {
            ctx->pc = 0x120698u;
            goto label_120698;
        }
    }
    ctx->pc = 0x1205DCu;
    // 0x1205dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1205dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1205e0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1205E0u;
    {
        const bool branch_taken_0x1205e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1205e0) {
            ctx->pc = 0x120668u;
            goto label_120668;
        }
    }
    ctx->pc = 0x1205E8u;
    // 0x1205e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1205e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1205ec: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1205ECu;
    {
        const bool branch_taken_0x1205ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1205ec) {
            ctx->pc = 0x120638u;
            goto label_120638;
        }
    }
    ctx->pc = 0x1205F4u;
    // 0x1205f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1205f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1205f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1205F8u;
    {
        const bool branch_taken_0x1205f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1205f8) {
            ctx->pc = 0x120608u;
            goto label_120608;
        }
    }
    ctx->pc = 0x120600u;
    // 0x120600: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x120600u;
    {
        const bool branch_taken_0x120600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120600) {
            ctx->pc = 0x120698u;
            goto label_120698;
        }
    }
    ctx->pc = 0x120608u;
label_120608:
    // 0x120608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12060c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120610: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x120610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120618: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120618u;
    {
        const bool branch_taken_0x120618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120618) {
            ctx->pc = 0x12062Cu;
            goto label_12062c;
        }
    }
    ctx->pc = 0x120620u;
    // 0x120620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120624: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x120624u;
    {
        const bool branch_taken_0x120624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120624) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x12062Cu;
label_12062c:
    // 0x12062c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120630: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x120634: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_120638:
    // 0x120638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12063c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120640: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x120640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120648: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120648u;
    {
        const bool branch_taken_0x120648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120648) {
            ctx->pc = 0x12065Cu;
            goto label_12065c;
        }
    }
    ctx->pc = 0x120650u;
    // 0x120650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120654: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x120654u;
    {
        const bool branch_taken_0x120654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120654) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x12065Cu;
label_12065c:
    // 0x12065c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120660: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x120664: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_120668:
    // 0x120668: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12066c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12066cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120670: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x120670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120678: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120678u;
    {
        const bool branch_taken_0x120678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120678) {
            ctx->pc = 0x12068Cu;
            goto label_12068c;
        }
    }
    ctx->pc = 0x120680u;
    // 0x120680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120684: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x120684u;
    {
        const bool branch_taken_0x120684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120684) {
            ctx->pc = 0x12069Cu;
            goto label_12069c;
        }
    }
    ctx->pc = 0x12068Cu;
label_12068c:
    // 0x12068c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120690: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x120690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x120694: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_120698:
    // 0x120698: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12069c:
    // 0x12069c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12069cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1206a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1206A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1206A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1206ACu;
    // 0x1206ac: 0x0  nop
    ctx->pc = 0x1206acu;
    // NOP
    ctx->pc = 0x1206b0u;
}
