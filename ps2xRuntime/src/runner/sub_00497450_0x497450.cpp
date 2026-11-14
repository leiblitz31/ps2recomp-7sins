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

// Function: sub_00497450
// Address: 0x497450 - 0x497570
void sub_00497450_0x497450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497450_0x497450");
#endif

    switch (ctx->pc) {
        case 0x497490u: goto label_497490;
        case 0x4974a0u: goto label_4974a0;
        case 0x4974b0u: goto label_4974b0;
        case 0x497548u: goto label_497548;
        default: break;
    }

    ctx->pc = 0x497450u;

    // 0x497450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x497450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x497454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x497454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x497458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x497458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x49745c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x497464: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x497464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x497468: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x497468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x49746c: 0x9382b7a4  lbu         $v0, -0x485C($gp)
    ctx->pc = 0x49746cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948772)));
    // 0x497470: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x497470u;
    {
        const bool branch_taken_0x497470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497470) {
            ctx->pc = 0x497484u;
            goto label_497484;
        }
    }
    ctx->pc = 0x497478u;
    // 0x497478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x497478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49747c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x49747Cu;
    {
        const bool branch_taken_0x49747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49747c) {
            ctx->pc = 0x49754Cu;
            goto label_49754c;
        }
    }
    ctx->pc = 0x497484u;
label_497484:
    // 0x497484: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x497484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497488: 0xc116ea4  jal         func_45BA90
    ctx->pc = 0x497488u;
    SET_GPR_U32(ctx, 31, 0x497490u);
    ctx->pc = 0x45BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BA90u, 0x497488u, 0x497490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497490u;
label_497490:
    // 0x497490: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x497490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497494: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x497494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497498: 0xc116f58  jal         func_45BD60
    ctx->pc = 0x497498u;
    SET_GPR_U32(ctx, 31, 0x4974A0u);
    ctx->pc = 0x45BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD60u, 0x497498u, 0x4974A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4974A0u;
label_4974a0:
    // 0x4974a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4974a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4974a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4974a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4974a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4974A8u;
    {
        const bool branch_taken_0x4974a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4974a8) {
            ctx->pc = 0x4974CCu;
            goto label_4974cc;
        }
    }
    ctx->pc = 0x4974B0u;
label_4974b0:
    // 0x4974b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4974b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4974b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4974b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4974b8: 0x2782c184  addiu       $v0, $gp, -0x3E7C
    ctx->pc = 0x4974b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951300));
    // 0x4974bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4974bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4974c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4974c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4974c4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x4974c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4974c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4974c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4974cc:
    // 0x4974cc: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x4974ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4974d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4974D0u;
    {
        const bool branch_taken_0x4974d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4974d0) {
            ctx->pc = 0x4974B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4974b0;
        }
    }
    ctx->pc = 0x4974D8u;
    // 0x4974d8: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x4974d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4974dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4974dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4974e0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4974E0u;
    {
        const bool branch_taken_0x4974e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4974e0) {
            ctx->pc = 0x497518u;
            goto label_497518;
        }
    }
    ctx->pc = 0x4974E8u;
    // 0x4974e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4974e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4974ec: 0x2782c180  addiu       $v0, $gp, -0x3E80
    ctx->pc = 0x4974ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951296));
    // 0x4974f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4974f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4974f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4974f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4974f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4974f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4974fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4974fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x497500: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x497500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x497504: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x497504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497508: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x497508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49750c: 0x2782c184  addiu       $v0, $gp, -0x3E7C
    ctx->pc = 0x49750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951300));
    // 0x497510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x497510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497514: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x497514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_497518:
    // 0x497518: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x497518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49751c: 0x2782c180  addiu       $v0, $gp, -0x3E80
    ctx->pc = 0x49751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951296));
    // 0x497520: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x497520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x497524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x497528: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x497528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49752c: 0x2782c184  addiu       $v0, $gp, -0x3E7C
    ctx->pc = 0x49752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951300));
    // 0x497530: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x497530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x497534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x497534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497538: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x497538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49753c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49753cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497540: 0xc0c4414  jal         func_311050
    ctx->pc = 0x497540u;
    SET_GPR_U32(ctx, 31, 0x497548u);
    ctx->pc = 0x311050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311050u, 0x497540u, 0x497548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497548u;
label_497548:
    // 0x497548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49754c:
    // 0x49754c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49754cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x497550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x497550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49755c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x49755cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x497560: 0x3e00008  jr          $ra
    ctx->pc = 0x497560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497568u;
    // 0x497568: 0x0  nop
    ctx->pc = 0x497568u;
    // NOP
    // 0x49756c: 0x0  nop
    ctx->pc = 0x49756cu;
    // NOP
    ctx->pc = 0x497570u;
}
