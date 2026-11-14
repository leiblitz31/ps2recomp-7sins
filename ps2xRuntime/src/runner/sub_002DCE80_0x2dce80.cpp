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

// Function: sub_002DCE80
// Address: 0x2dce80 - 0x2dd070
void sub_002DCE80_0x2dce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCE80_0x2dce80");
#endif

    switch (ctx->pc) {
        case 0x2dce9cu: goto label_2dce9c;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf2cu: goto label_2dcf2c;
        case 0x2dcf60u: goto label_2dcf60;
        case 0x2dcf80u: goto label_2dcf80;
        case 0x2dcf90u: goto label_2dcf90;
        case 0x2dcfa8u: goto label_2dcfa8;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dd00cu: goto label_2dd00c;
        case 0x2dd01cu: goto label_2dd01c;
        case 0x2dd03cu: goto label_2dd03c;
        case 0x2dd04cu: goto label_2dd04c;
        case 0x2dd060u: goto label_2dd060;
        default: break;
    }

    ctx->pc = 0x2dce80u;

    // 0x2dce80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dce84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dce88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dce8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dce90: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2dce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2dce94: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2DCE94u;
    SET_GPR_U32(ctx, 31, 0x2DCE9Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2DCE94u, 0x2DCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE9Cu;
label_2dce9c:
    // 0x2dce9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2dcea0: 0x246369d0  addiu       $v1, $v1, 0x69D0
    ctx->pc = 0x2dcea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27088));
    // 0x2dcea4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dceac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dceb0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2dceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2dceb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dceb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcebc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dcebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dcec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCEC8u;
    // 0x2dcec8: 0x0  nop
    ctx->pc = 0x2dcec8u;
    // NOP
    // 0x2dcecc: 0x0  nop
    ctx->pc = 0x2dceccu;
    // NOP
    // 0x2dced0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dced4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dced8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dced8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dcedc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dcedcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dcee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcee4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCEE4u;
    {
        const bool branch_taken_0x2dcee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcee4) {
            ctx->pc = 0x2DCF2Cu;
            goto label_2dcf2c;
        }
    }
    ctx->pc = 0x2DCEECu;
    // 0x2dceec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2dceecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2dcef0: 0x246369d0  addiu       $v1, $v1, 0x69D0
    ctx->pc = 0x2dcef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27088));
    // 0x2dcef4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcef8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dcefc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dcf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf04: 0xc091188  jal         func_244620
    ctx->pc = 0x2DCF04u;
    SET_GPR_U32(ctx, 31, 0x2DCF0Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2DCF04u, 0x2DCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF0Cu;
label_2dcf0c:
    // 0x2dcf0c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dcf0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcf10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dcf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dcf14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dcf14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dcf18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCF18u;
    {
        const bool branch_taken_0x2dcf18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dcf18) {
            ctx->pc = 0x2DCF2Cu;
            goto label_2dcf2c;
        }
    }
    ctx->pc = 0x2DCF20u;
    // 0x2dcf20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dcf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf24: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DCF24u;
    SET_GPR_U32(ctx, 31, 0x2DCF2Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DCF24u, 0x2DCF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF2Cu;
label_2dcf2c:
    // 0x2dcf2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcf30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcf34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dcf34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dcf38: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCF40u;
    // 0x2dcf40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dcf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dcf44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dcf48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcf4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dcf50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2dcf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2dcf54: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dcf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcf58: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2DCF58u;
    SET_GPR_U32(ctx, 31, 0x2DCF60u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2DCF58u, 0x2DCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF60u;
label_2dcf60:
    // 0x2dcf60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2dcf60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dcf64: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2dcf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2dcf68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dcf6c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCF6Cu;
    {
        const bool branch_taken_0x2dcf6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dcf6c) {
            ctx->pc = 0x2DCFC8u;
            goto label_2dcfc8;
        }
    }
    ctx->pc = 0x2DCF74u;
    // 0x2dcf74: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2dcf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2dcf78: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2DCF78u;
    SET_GPR_U32(ctx, 31, 0x2DCF80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2DCF78u, 0x2DCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF80u;
label_2dcf80:
    // 0x2dcf80: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2dcf84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dcf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf88: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2DCF88u;
    SET_GPR_U32(ctx, 31, 0x2DCF90u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2DCF88u, 0x2DCF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF90u;
label_2dcf90:
    // 0x2dcf90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcf94: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCF94u;
    {
        const bool branch_taken_0x2dcf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf94) {
            ctx->pc = 0x2DCFACu;
            goto label_2dcfac;
        }
    }
    ctx->pc = 0x2DCF9Cu;
    // 0x2dcf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfa0: 0xc0b9678  jal         func_2E59E0
    ctx->pc = 0x2DCFA0u;
    SET_GPR_U32(ctx, 31, 0x2DCFA8u);
    ctx->pc = 0x2E59E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E59E0u, 0x2DCFA0u, 0x2DCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFA8u;
label_2dcfa8:
    // 0x2dcfa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfac:
    // 0x2dcfac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dcfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcfb0: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x2dcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x2dcfb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcfb8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2dcfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2dcfbc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dcfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcfc0: 0xc0b97a8  jal         func_2E5EA0
    ctx->pc = 0x2DCFC0u;
    SET_GPR_U32(ctx, 31, 0x2DCFC8u);
    ctx->pc = 0x2E5EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5EA0u, 0x2DCFC0u, 0x2DCFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFC8u;
label_2dcfc8:
    // 0x2dcfc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dcfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcfcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dcfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcfd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcfd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcfd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dcfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dcfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCFE4u;
    // 0x2dcfe4: 0x0  nop
    ctx->pc = 0x2dcfe4u;
    // NOP
    // 0x2dcfe8: 0x0  nop
    ctx->pc = 0x2dcfe8u;
    // NOP
    // 0x2dcfec: 0x0  nop
    ctx->pc = 0x2dcfecu;
    // NOP
    // 0x2dcff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dcff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dcff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dcff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dcffc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd000: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2dd000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2dd004: 0xc0b9ca8  jal         func_2E72A0
    ctx->pc = 0x2DD004u;
    SET_GPR_U32(ctx, 31, 0x2DD00Cu);
    ctx->pc = 0x2E72A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E72A0u, 0x2DD004u, 0x2DD00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD00Cu;
label_2dd00c:
    // 0x2dd00c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd010: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2dd014: 0xc0b97cc  jal         func_2E5F30
    ctx->pc = 0x2DD014u;
    SET_GPR_U32(ctx, 31, 0x2DD01Cu);
    ctx->pc = 0x2E5F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5F30u, 0x2DD014u, 0x2DD01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD01Cu;
label_2dd01c:
    // 0x2dd01c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd020: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2dd020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2dd024: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD024u;
    {
        const bool branch_taken_0x2dd024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd024) {
            ctx->pc = 0x2DD054u;
            goto label_2dd054;
        }
    }
    ctx->pc = 0x2DD02Cu;
    // 0x2dd02c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd030: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2dd030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2dd034: 0xc0b741c  jal         func_2DD070
    ctx->pc = 0x2DD034u;
    SET_GPR_U32(ctx, 31, 0x2DD03Cu);
    ctx->pc = 0x2DD070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD070u, 0x2DD034u, 0x2DD03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD03Cu;
label_2dd03c:
    // 0x2dd03c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd040: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2dd040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2dd044: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2DD044u;
    SET_GPR_U32(ctx, 31, 0x2DD04Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2DD044u, 0x2DD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD04Cu;
label_2dd04c:
    // 0x2dd04c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd050: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2dd050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_2dd054:
    // 0x2dd054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dd054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd058: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2DD058u;
    SET_GPR_U32(ctx, 31, 0x2DD060u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2DD058u, 0x2DD060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD060u;
label_2dd060:
    // 0x2dd060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd064: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dd064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dd068: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD070u;
}
