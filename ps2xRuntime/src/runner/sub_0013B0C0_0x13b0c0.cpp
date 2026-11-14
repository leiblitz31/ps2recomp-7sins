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

// Function: sub_0013B0C0
// Address: 0x13b0c0 - 0x13b210
void sub_0013B0C0_0x13b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B0C0_0x13b0c0");
#endif

    switch (ctx->pc) {
        case 0x13b0ecu: goto label_13b0ec;
        case 0x13b0f8u: goto label_13b0f8;
        case 0x13b10cu: goto label_13b10c;
        case 0x13b11cu: goto label_13b11c;
        case 0x13b12cu: goto label_13b12c;
        case 0x13b13cu: goto label_13b13c;
        case 0x13b14cu: goto label_13b14c;
        case 0x13b15cu: goto label_13b15c;
        case 0x13b170u: goto label_13b170;
        case 0x13b17cu: goto label_13b17c;
        case 0x13b198u: goto label_13b198;
        case 0x13b1acu: goto label_13b1ac;
        case 0x13b1bcu: goto label_13b1bc;
        case 0x13b1ccu: goto label_13b1cc;
        case 0x13b1dcu: goto label_13b1dc;
        default: break;
    }

    ctx->pc = 0x13b0c0u;

    // 0x13b0c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13b0c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13b0c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b0cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b0d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b0d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b0dc: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x13b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x13b0e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13b0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0e4: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x13B0E4u;
    SET_GPR_U32(ctx, 31, 0x13B0ECu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x13B0E4u, 0x13B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0ECu;
label_13b0ec:
    // 0x13b0ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0f0: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x13B0F0u;
    SET_GPR_U32(ctx, 31, 0x13B0F8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x13B0F0u, 0x13B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0F8u;
label_13b0f8:
    // 0x13b0f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13b0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b100: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13b100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b104: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x13B104u;
    SET_GPR_U32(ctx, 31, 0x13B10Cu);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x13B104u, 0x13B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B10Cu;
label_13b10c:
    // 0x13b10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b110: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13b110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b114: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x13B114u;
    SET_GPR_U32(ctx, 31, 0x13B11Cu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x13B114u, 0x13B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B11Cu;
label_13b11c:
    // 0x13b11c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x13b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b120: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13b120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13b124: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13B124u;
    SET_GPR_U32(ctx, 31, 0x13B12Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13B124u, 0x13B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B12Cu;
label_13b12c:
    // 0x13b12c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b134: 0xc096da0  jal         func_25B680
    ctx->pc = 0x13B134u;
    SET_GPR_U32(ctx, 31, 0x13B13Cu);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x13B134u, 0x13B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B13Cu;
label_13b13c:
    // 0x13b13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b144: 0xc096994  jal         func_25A650
    ctx->pc = 0x13B144u;
    SET_GPR_U32(ctx, 31, 0x13B14Cu);
    ctx->pc = 0x25A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A650u, 0x13B144u, 0x13B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B14Cu;
label_13b14c:
    // 0x13b14c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x13b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b150: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x13b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13b154: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13B154u;
    SET_GPR_U32(ctx, 31, 0x13B15Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13B154u, 0x13B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B15Cu;
label_13b15c:
    // 0x13b15c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13b15cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13b160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b164: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b168: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x13B168u;
    SET_GPR_U32(ctx, 31, 0x13B170u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x13B168u, 0x13B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B170u;
label_13b170:
    // 0x13b170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b174: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x13B174u;
    SET_GPR_U32(ctx, 31, 0x13B17Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x13B174u, 0x13B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B17Cu;
label_13b17c:
    // 0x13b17c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b180: 0x10110016  beq         $zero, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x13B180u;
    {
        const bool branch_taken_0x13b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x13b180) {
            ctx->pc = 0x13B1DCu;
            goto label_13b1dc;
        }
    }
    ctx->pc = 0x13B188u;
    // 0x13b188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b18c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x13b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13b190: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13B190u;
    SET_GPR_U32(ctx, 31, 0x13B198u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13B190u, 0x13B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B198u;
label_13b198:
    // 0x13b198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13b198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b19c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1a0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x13b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b1a4: 0xc097698  jal         func_25DA60
    ctx->pc = 0x13B1A4u;
    SET_GPR_U32(ctx, 31, 0x13B1ACu);
    ctx->pc = 0x25DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA60u, 0x13B1A4u, 0x13B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1ACu;
label_13b1ac:
    // 0x13b1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1b4: 0xc09689c  jal         func_25A270
    ctx->pc = 0x13B1B4u;
    SET_GPR_U32(ctx, 31, 0x13B1BCu);
    ctx->pc = 0x25A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A270u, 0x13B1B4u, 0x13B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1BCu;
label_13b1bc:
    // 0x13b1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1c4: 0xc04ec84  jal         func_13B210
    ctx->pc = 0x13B1C4u;
    SET_GPR_U32(ctx, 31, 0x13B1CCu);
    ctx->pc = 0x13B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B210u, 0x13B1C4u, 0x13B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1CCu;
label_13b1cc:
    // 0x13b1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1d4: 0xc096b74  jal         func_25ADD0
    ctx->pc = 0x13B1D4u;
    SET_GPR_U32(ctx, 31, 0x13B1DCu);
    ctx->pc = 0x25ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADD0u, 0x13B1D4u, 0x13B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B1DCu;
label_13b1dc:
    // 0x13b1dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b1e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13b1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b1e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b1e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b1e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b1e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b1ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b1ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b1f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b1f8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x13b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13B1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B204u;
    // 0x13b204: 0x0  nop
    ctx->pc = 0x13b204u;
    // NOP
    // 0x13b208: 0x0  nop
    ctx->pc = 0x13b208u;
    // NOP
    // 0x13b20c: 0x0  nop
    ctx->pc = 0x13b20cu;
    // NOP
    ctx->pc = 0x13b210u;
}
