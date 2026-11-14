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

// Function: sub_00493460
// Address: 0x493460 - 0x493670
void sub_00493460_0x493460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493460_0x493460");
#endif

    switch (ctx->pc) {
        case 0x4934a4u: goto label_4934a4;
        default: break;
    }

    ctx->pc = 0x493460u;

    // 0x493460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x493460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x493464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x493464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x493468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49346c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x49346cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x493470: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x493470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x493474: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x493474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493478: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49347c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49347cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493480: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x493480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x493484: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x493484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x493488u;
    {
        const bool branch_taken_0x493488 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x493488) {
            ctx->pc = 0x493498u;
            goto label_493498;
        }
    }
    ctx->pc = 0x493490u;
    // 0x493490: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x493490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x493494: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493494u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_493498:
    // 0x493498: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x493498u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x49349c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x49349Cu;
    {
        const bool branch_taken_0x49349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49349c) {
            ctx->pc = 0x493568u;
            goto label_493568;
        }
    }
    ctx->pc = 0x4934A4u;
label_4934a4:
    // 0x4934a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4934a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4934a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4934a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4934ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4934acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4934b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4934b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4934b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4934B4u;
    {
        const bool branch_taken_0x4934b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4934b4) {
            ctx->pc = 0x4934C8u;
            goto label_4934c8;
        }
    }
    ctx->pc = 0x4934BCu;
    // 0x4934bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4934bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4934c0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x4934C0u;
    {
        const bool branch_taken_0x4934c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4934c0) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x4934C8u;
label_4934c8:
    // 0x4934c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4934c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4934cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4934ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4934d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4934d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4934d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4934d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4934d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4934d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4934dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4934dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4934e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4934e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4934e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4934E4u;
    {
        const bool branch_taken_0x4934e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4934e4) {
            ctx->pc = 0x4934F8u;
            goto label_4934f8;
        }
    }
    ctx->pc = 0x4934ECu;
    // 0x4934ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4934ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4934f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x4934F0u;
    {
        const bool branch_taken_0x4934f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4934f0) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x4934F8u;
label_4934f8:
    // 0x4934f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4934f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4934fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493500: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x493504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x493508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49350c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493510: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493514: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493514u;
    {
        const bool branch_taken_0x493514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493514) {
            ctx->pc = 0x493528u;
            goto label_493528;
        }
    }
    ctx->pc = 0x49351Cu;
    // 0x49351c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493520: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x493520u;
    {
        const bool branch_taken_0x493520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493520) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x493528u;
label_493528:
    // 0x493528: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49352c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493530: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x493534: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493538: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x493538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49353c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493540: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493544: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493544u;
    {
        const bool branch_taken_0x493544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493544) {
            ctx->pc = 0x493558u;
            goto label_493558;
        }
    }
    ctx->pc = 0x49354Cu;
    // 0x49354c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493550: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x493550u;
    {
        const bool branch_taken_0x493550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493550) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x493558u;
label_493558:
    // 0x493558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49355c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493560: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x493564: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x493564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_493568:
    // 0x493568: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x493568u;
    {
        const bool branch_taken_0x493568 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x493568) {
            ctx->pc = 0x4934A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4934a4;
        }
    }
    ctx->pc = 0x493570u;
    // 0x493570: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x493570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493574: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493578: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x493578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49357c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x493580: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x493580u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x493584: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x493584u;
    {
        const bool branch_taken_0x493584 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x493584) {
            ctx->pc = 0x493594u;
            goto label_493594;
        }
    }
    ctx->pc = 0x49358Cu;
    // 0x49358c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x49358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x493590: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x493590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_493594:
    // 0x493594: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x493594u;
    {
        const bool branch_taken_0x493594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493594) {
            ctx->pc = 0x493658u;
            goto label_493658;
        }
    }
    ctx->pc = 0x49359Cu;
    // 0x49359c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4935a0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4935A0u;
    {
        const bool branch_taken_0x4935a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4935a0) {
            ctx->pc = 0x493628u;
            goto label_493628;
        }
    }
    ctx->pc = 0x4935A8u;
    // 0x4935a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4935a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4935ac: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4935ACu;
    {
        const bool branch_taken_0x4935ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4935ac) {
            ctx->pc = 0x4935F8u;
            goto label_4935f8;
        }
    }
    ctx->pc = 0x4935B4u;
    // 0x4935b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4935b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4935b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4935B8u;
    {
        const bool branch_taken_0x4935b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4935b8) {
            ctx->pc = 0x4935C8u;
            goto label_4935c8;
        }
    }
    ctx->pc = 0x4935C0u;
    // 0x4935c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4935C0u;
    {
        const bool branch_taken_0x4935c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4935c0) {
            ctx->pc = 0x493658u;
            goto label_493658;
        }
    }
    ctx->pc = 0x4935C8u;
label_4935c8:
    // 0x4935c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4935c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4935cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4935ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4935d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4935d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4935d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4935d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4935D8u;
    {
        const bool branch_taken_0x4935d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4935d8) {
            ctx->pc = 0x4935ECu;
            goto label_4935ec;
        }
    }
    ctx->pc = 0x4935E0u;
    // 0x4935e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4935e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4935e4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4935E4u;
    {
        const bool branch_taken_0x4935e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4935e4) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x4935ECu;
label_4935ec:
    // 0x4935ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4935ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4935f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4935f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4935f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4935f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4935f8:
    // 0x4935f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4935f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4935fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4935fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493600: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x493600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493604: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493608: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493608u;
    {
        const bool branch_taken_0x493608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493608) {
            ctx->pc = 0x49361Cu;
            goto label_49361c;
        }
    }
    ctx->pc = 0x493610u;
    // 0x493610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493614: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x493614u;
    {
        const bool branch_taken_0x493614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493614) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x49361Cu;
label_49361c:
    // 0x49361c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493620: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x493620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493624: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_493628:
    // 0x493628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49362c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49362cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493630: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x493630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493634: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493638: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493638u;
    {
        const bool branch_taken_0x493638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493638) {
            ctx->pc = 0x49364Cu;
            goto label_49364c;
        }
    }
    ctx->pc = 0x493640u;
    // 0x493640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493644: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x493644u;
    {
        const bool branch_taken_0x493644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493644) {
            ctx->pc = 0x49365Cu;
            goto label_49365c;
        }
    }
    ctx->pc = 0x49364Cu;
label_49364c:
    // 0x49364c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493650: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x493650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493654: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_493658:
    // 0x493658: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x493658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_49365c:
    // 0x49365c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49365cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493660: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x493660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x493664: 0x3e00008  jr          $ra
    ctx->pc = 0x493664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49366Cu;
    // 0x49366c: 0x0  nop
    ctx->pc = 0x49366cu;
    // NOP
    ctx->pc = 0x493670u;
}
