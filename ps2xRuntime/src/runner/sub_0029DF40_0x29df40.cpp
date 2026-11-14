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

// Function: sub_0029DF40
// Address: 0x29df40 - 0x29e140
void sub_0029DF40_0x29df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DF40_0x29df40");
#endif

    switch (ctx->pc) {
        case 0x29df58u: goto label_29df58;
        case 0x29dfbcu: goto label_29dfbc;
        case 0x29dfdcu: goto label_29dfdc;
        case 0x29e014u: goto label_29e014;
        case 0x29e04cu: goto label_29e04c;
        case 0x29e0acu: goto label_29e0ac;
        case 0x29e0c4u: goto label_29e0c4;
        case 0x29e0d8u: goto label_29e0d8;
        case 0x29e0ecu: goto label_29e0ec;
        case 0x29e0f8u: goto label_29e0f8;
        case 0x29e12cu: goto label_29e12c;
        default: break;
    }

    ctx->pc = 0x29df40u;

    // 0x29df40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29df44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29df48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29df48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29df4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29df50: 0xc0a71d8  jal         func_29C760
    ctx->pc = 0x29DF50u;
    SET_GPR_U32(ctx, 31, 0x29DF58u);
    ctx->pc = 0x29C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C760u, 0x29DF50u, 0x29DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF58u;
label_29df58:
    // 0x29df58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x29df5c: 0x24636210  addiu       $v1, $v1, 0x6210
    ctx->pc = 0x29df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25104));
    // 0x29df60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29df64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29df64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29df68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29df6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29df6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29df70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29df74: 0x3e00008  jr          $ra
    ctx->pc = 0x29DF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DF7Cu;
    // 0x29df7c: 0x0  nop
    ctx->pc = 0x29df7cu;
    // NOP
    // 0x29df80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29df84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29df88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29df88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29df8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29df8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x29df90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29df94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29DF94u;
    {
        const bool branch_taken_0x29df94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df94) {
            ctx->pc = 0x29DFDCu;
            goto label_29dfdc;
        }
    }
    ctx->pc = 0x29DF9Cu;
    // 0x29df9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x29dfa0: 0x24636210  addiu       $v1, $v1, 0x6210
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25104));
    // 0x29dfa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dfa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29dfac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dfb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29dfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfb4: 0xc0a7200  jal         func_29C800
    ctx->pc = 0x29DFB4u;
    SET_GPR_U32(ctx, 31, 0x29DFBCu);
    ctx->pc = 0x29C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C800u, 0x29DFB4u, 0x29DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFBCu;
label_29dfbc:
    // 0x29dfbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dfc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29dfc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29dfc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29dfc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29DFC8u;
    {
        const bool branch_taken_0x29dfc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29dfc8) {
            ctx->pc = 0x29DFDCu;
            goto label_29dfdc;
        }
    }
    ctx->pc = 0x29DFD0u;
    // 0x29dfd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dfd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x29DFD4u;
    SET_GPR_U32(ctx, 31, 0x29DFDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29DFD4u, 0x29DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFDCu;
label_29dfdc:
    // 0x29dfdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29dfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dfe4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29dfe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29dfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x29DFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DFF0u;
    // 0x29dff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29dff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29dff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29dffc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29e000: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29e000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29e004: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29e004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e008: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29e008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e00c: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x29E00Cu;
    SET_GPR_U32(ctx, 31, 0x29E014u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x29E00Cu, 0x29E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E014u;
label_29e014:
    // 0x29e014: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29e014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e018: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29e018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29e01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e020: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29E020u;
    {
        const bool branch_taken_0x29e020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e020) {
            ctx->pc = 0x29E054u;
            goto label_29e054;
        }
    }
    ctx->pc = 0x29E028u;
    // 0x29e028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e02c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e030: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x29e030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x29e034: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e038: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29e038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29e03c: 0x240504d0  addiu       $a1, $zero, 0x4D0
    ctx->pc = 0x29e03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    // 0x29e040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e044: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x29E044u;
    SET_GPR_U32(ctx, 31, 0x29E04Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x29E044u, 0x29E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E04Cu;
label_29e04c:
    // 0x29e04c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e050: 0xa0620068  sb          $v0, 0x68($v1)
    ctx->pc = 0x29e050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 2));
label_29e054:
    // 0x29e054: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29e054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e05c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e060: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29e064: 0x3e00008  jr          $ra
    ctx->pc = 0x29E064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E06Cu;
    // 0x29e06c: 0x0  nop
    ctx->pc = 0x29e06cu;
    // NOP
    // 0x29e070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29e078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e07c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29e080: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e084: 0x90420068  lbu         $v0, 0x68($v0)
    ctx->pc = 0x29e084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x29e088: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e090: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29E090u;
    {
        const bool branch_taken_0x29e090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e090) {
            ctx->pc = 0x29E0ECu;
            goto label_29e0ec;
        }
    }
    ctx->pc = 0x29E098u;
    // 0x29e098: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e09c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29e0a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29e0a4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29E0A4u;
    SET_GPR_U32(ctx, 31, 0x29E0ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29E0A4u, 0x29E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0ACu;
label_29e0ac:
    // 0x29e0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29e0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29e0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e0b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0bc: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x29E0BCu;
    SET_GPR_U32(ctx, 31, 0x29E0C4u);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x29E0BCu, 0x29E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0C4u;
label_29e0c4:
    // 0x29e0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0d0: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x29E0D0u;
    SET_GPR_U32(ctx, 31, 0x29E0D8u);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x29E0D0u, 0x29E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0D8u;
label_29e0d8:
    // 0x29e0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e0e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0e4: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x29E0E4u;
    SET_GPR_U32(ctx, 31, 0x29E0ECu);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x29E0E4u, 0x29E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0ECu;
label_29e0ec:
    // 0x29e0ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29e0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e0f0: 0xc09d220  jal         func_274880
    ctx->pc = 0x29E0F0u;
    SET_GPR_U32(ctx, 31, 0x29E0F8u);
    ctx->pc = 0x274880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274880u, 0x29E0F0u, 0x29E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0F8u;
label_29e0f8:
    // 0x29e0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e100: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29e104: 0x3e00008  jr          $ra
    ctx->pc = 0x29E104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E10Cu;
    // 0x29e10c: 0x0  nop
    ctx->pc = 0x29e10cu;
    // NOP
    // 0x29e110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29e118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29e11c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e120: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x29e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x29e124: 0xc0a7850  jal         func_29E140
    ctx->pc = 0x29E124u;
    SET_GPR_U32(ctx, 31, 0x29E12Cu);
    ctx->pc = 0x29E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E140u, 0x29E124u, 0x29E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E12Cu;
label_29e12c:
    // 0x29e12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e130: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29e134: 0x3e00008  jr          $ra
    ctx->pc = 0x29E134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E13Cu;
    // 0x29e13c: 0x0  nop
    ctx->pc = 0x29e13cu;
    // NOP
    ctx->pc = 0x29e140u;
}
