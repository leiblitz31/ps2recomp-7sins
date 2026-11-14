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

// Function: sub_00225690
// Address: 0x225690 - 0x2258a0
void sub_00225690_0x225690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225690_0x225690");
#endif

    switch (ctx->pc) {
        case 0x2256d4u: goto label_2256d4;
        default: break;
    }

    ctx->pc = 0x225690u;

    // 0x225690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22569c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22569cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2256a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2256a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2256a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2256a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2256a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2256ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2256acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2256b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2256b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2256b4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2256b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2256b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2256B8u;
    {
        const bool branch_taken_0x2256b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2256b8) {
            ctx->pc = 0x2256C8u;
            goto label_2256c8;
        }
    }
    ctx->pc = 0x2256C0u;
    // 0x2256c0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2256c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2256c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2256c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2256c8:
    // 0x2256c8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2256cc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2256CCu;
    {
        const bool branch_taken_0x2256cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2256cc) {
            ctx->pc = 0x225798u;
            goto label_225798;
        }
    }
    ctx->pc = 0x2256D4u;
label_2256d4:
    // 0x2256d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2256d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2256d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2256dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2256dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2256e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2256e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2256e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2256E4u;
    {
        const bool branch_taken_0x2256e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2256e4) {
            ctx->pc = 0x2256F8u;
            goto label_2256f8;
        }
    }
    ctx->pc = 0x2256ECu;
    // 0x2256ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2256ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2256f0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2256F0u;
    {
        const bool branch_taken_0x2256f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2256f0) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2256f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2256fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2256fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225700: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x225704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22570c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225714: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225714u;
    {
        const bool branch_taken_0x225714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225714) {
            ctx->pc = 0x225728u;
            goto label_225728;
        }
    }
    ctx->pc = 0x22571Cu;
    // 0x22571c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225720: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x225720u;
    {
        const bool branch_taken_0x225720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225720) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x225728u;
label_225728:
    // 0x225728: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22572c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225730: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x225734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22573c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225744: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225744u;
    {
        const bool branch_taken_0x225744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225744) {
            ctx->pc = 0x225758u;
            goto label_225758;
        }
    }
    ctx->pc = 0x22574Cu;
    // 0x22574c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225750: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x225750u;
    {
        const bool branch_taken_0x225750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225750) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x225758u;
label_225758:
    // 0x225758: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22575c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225760: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x225764: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225768: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22576c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225770: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225774: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225774u;
    {
        const bool branch_taken_0x225774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225774) {
            ctx->pc = 0x225788u;
            goto label_225788;
        }
    }
    ctx->pc = 0x22577Cu;
    // 0x22577c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225780: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x225780u;
    {
        const bool branch_taken_0x225780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225780) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x225788u;
label_225788:
    // 0x225788: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22578c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225790: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x225794: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x225794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_225798:
    // 0x225798: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x225798u;
    {
        const bool branch_taken_0x225798 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x225798) {
            ctx->pc = 0x2256D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2256d4;
        }
    }
    ctx->pc = 0x2257A0u;
    // 0x2257a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2257a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2257a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2257a8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2257a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2257ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2257acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2257b0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2257b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2257b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2257B4u;
    {
        const bool branch_taken_0x2257b4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2257b4) {
            ctx->pc = 0x2257C4u;
            goto label_2257c4;
        }
    }
    ctx->pc = 0x2257BCu;
    // 0x2257bc: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2257bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2257c0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2257c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2257c4:
    // 0x2257c4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2257C4u;
    {
        const bool branch_taken_0x2257c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2257c4) {
            ctx->pc = 0x225888u;
            goto label_225888;
        }
    }
    ctx->pc = 0x2257CCu;
    // 0x2257cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2257ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2257d0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2257D0u;
    {
        const bool branch_taken_0x2257d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2257d0) {
            ctx->pc = 0x225858u;
            goto label_225858;
        }
    }
    ctx->pc = 0x2257D8u;
    // 0x2257d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2257d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2257dc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2257DCu;
    {
        const bool branch_taken_0x2257dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2257dc) {
            ctx->pc = 0x225828u;
            goto label_225828;
        }
    }
    ctx->pc = 0x2257E4u;
    // 0x2257e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2257e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2257e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2257E8u;
    {
        const bool branch_taken_0x2257e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2257e8) {
            ctx->pc = 0x2257F8u;
            goto label_2257f8;
        }
    }
    ctx->pc = 0x2257F0u;
    // 0x2257f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2257F0u;
    {
        const bool branch_taken_0x2257f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2257f0) {
            ctx->pc = 0x225888u;
            goto label_225888;
        }
    }
    ctx->pc = 0x2257F8u;
label_2257f8:
    // 0x2257f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2257f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2257fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225800: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225808: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225808u;
    {
        const bool branch_taken_0x225808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225808) {
            ctx->pc = 0x22581Cu;
            goto label_22581c;
        }
    }
    ctx->pc = 0x225810u;
    // 0x225810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225814: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x225814u;
    {
        const bool branch_taken_0x225814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225814) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x22581Cu;
label_22581c:
    // 0x22581c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225820: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x225820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225824: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_225828:
    // 0x225828: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22582c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225830: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x225830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225834: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225838: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225838u;
    {
        const bool branch_taken_0x225838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225838) {
            ctx->pc = 0x22584Cu;
            goto label_22584c;
        }
    }
    ctx->pc = 0x225840u;
    // 0x225840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225844: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x225844u;
    {
        const bool branch_taken_0x225844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225844) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x22584Cu;
label_22584c:
    // 0x22584c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225850: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x225850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225854: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_225858:
    // 0x225858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22585c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225860: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225868: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225868u;
    {
        const bool branch_taken_0x225868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225868) {
            ctx->pc = 0x22587Cu;
            goto label_22587c;
        }
    }
    ctx->pc = 0x225870u;
    // 0x225870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x225874u;
    {
        const bool branch_taken_0x225874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225874) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x22587Cu;
label_22587c:
    // 0x22587c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225880: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x225880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x225884: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x225884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_225888:
    // 0x225888: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22588c:
    // 0x22588c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22588cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225890: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x225890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x225894: 0x3e00008  jr          $ra
    ctx->pc = 0x225894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22589Cu;
    // 0x22589c: 0x0  nop
    ctx->pc = 0x22589cu;
    // NOP
    ctx->pc = 0x2258a0u;
}
