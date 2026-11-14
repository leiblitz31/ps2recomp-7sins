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

// Function: sub_0029BFB0
// Address: 0x29bfb0 - 0x29c720
void sub_0029BFB0_0x29bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BFB0_0x29bfb0");
#endif

    switch (ctx->pc) {
        case 0x29bfc8u: goto label_29bfc8;
        case 0x29c02cu: goto label_29c02c;
        case 0x29c04cu: goto label_29c04c;
        case 0x29c08cu: goto label_29c08c;
        case 0x29c0c8u: goto label_29c0c8;
        case 0x29c100u: goto label_29c100;
        case 0x29c150u: goto label_29c150;
        case 0x29c18cu: goto label_29c18c;
        case 0x29c1b0u: goto label_29c1b0;
        case 0x29c1e0u: goto label_29c1e0;
        case 0x29c204u: goto label_29c204;
        case 0x29c214u: goto label_29c214;
        case 0x29c230u: goto label_29c230;
        case 0x29c24cu: goto label_29c24c;
        case 0x29c260u: goto label_29c260;
        case 0x29c270u: goto label_29c270;
        case 0x29c280u: goto label_29c280;
        case 0x29c2a4u: goto label_29c2a4;
        case 0x29c2b8u: goto label_29c2b8;
        case 0x29c2ccu: goto label_29c2cc;
        case 0x29c2dcu: goto label_29c2dc;
        case 0x29c2f8u: goto label_29c2f8;
        case 0x29c304u: goto label_29c304;
        case 0x29c31cu: goto label_29c31c;
        case 0x29c330u: goto label_29c330;
        case 0x29c340u: goto label_29c340;
        case 0x29c354u: goto label_29c354;
        case 0x29c368u: goto label_29c368;
        case 0x29c380u: goto label_29c380;
        case 0x29c390u: goto label_29c390;
        case 0x29c3a8u: goto label_29c3a8;
        case 0x29c3e8u: goto label_29c3e8;
        case 0x29c3f4u: goto label_29c3f4;
        case 0x29c41cu: goto label_29c41c;
        case 0x29c428u: goto label_29c428;
        case 0x29c458u: goto label_29c458;
        case 0x29c464u: goto label_29c464;
        case 0x29c484u: goto label_29c484;
        case 0x29c490u: goto label_29c490;
        case 0x29c4e0u: goto label_29c4e0;
        case 0x29c4f0u: goto label_29c4f0;
        case 0x29c51cu: goto label_29c51c;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c560u: goto label_29c560;
        case 0x29c570u: goto label_29c570;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c610u: goto label_29c610;
        case 0x29c638u: goto label_29c638;
        case 0x29c650u: goto label_29c650;
        case 0x29c67cu: goto label_29c67c;
        case 0x29c6a4u: goto label_29c6a4;
        case 0x29c6bcu: goto label_29c6bc;
        case 0x29c6ccu: goto label_29c6cc;
        case 0x29c6dcu: goto label_29c6dc;
        default: break;
    }

    ctx->pc = 0x29bfb0u;

    // 0x29bfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29bfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bfb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29bfbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bfc0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x29BFC0u;
    SET_GPR_U32(ctx, 31, 0x29BFC8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x29BFC0u, 0x29BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFC8u;
label_29bfc8:
    // 0x29bfc8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x29bfcc: 0x24636180  addiu       $v1, $v1, 0x6180
    ctx->pc = 0x29bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24960));
    // 0x29bfd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bfd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29bfd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bfe0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29bfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x29BFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BFECu;
    // 0x29bfec: 0x0  nop
    ctx->pc = 0x29bfecu;
    // NOP
    // 0x29bff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29bff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29bffc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x29bffcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x29c000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c004: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29C004u;
    {
        const bool branch_taken_0x29c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c004) {
            ctx->pc = 0x29C04Cu;
            goto label_29c04c;
        }
    }
    ctx->pc = 0x29C00Cu;
    // 0x29c00c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x29c010: 0x24636180  addiu       $v1, $v1, 0x6180
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24960));
    // 0x29c014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29c018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29c01c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c024: 0xc09d150  jal         func_274540
    ctx->pc = 0x29C024u;
    SET_GPR_U32(ctx, 31, 0x29C02Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x29C024u, 0x29C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C02Cu;
label_29c02c:
    // 0x29c02c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x29c02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c030: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29c034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29c034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29c038: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C038u;
    {
        const bool branch_taken_0x29c038 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29c038) {
            ctx->pc = 0x29C04Cu;
            goto label_29c04c;
        }
    }
    ctx->pc = 0x29C040u;
    // 0x29c040: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c044: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x29C044u;
    SET_GPR_U32(ctx, 31, 0x29C04Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x29C044u, 0x29C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C04Cu;
label_29c04c:
    // 0x29c04c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c054: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c058: 0x3e00008  jr          $ra
    ctx->pc = 0x29C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C060u;
    // 0x29c060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29c068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c06c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29c070: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29c070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29c074: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29c074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29c078: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29c078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c07c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c080: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c084: 0xc09d18c  jal         func_274630
    ctx->pc = 0x29C084u;
    SET_GPR_U32(ctx, 31, 0x29C08Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x29C084u, 0x29C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C08Cu;
label_29c08c:
    // 0x29c08c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29c08cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c09c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29c09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C0A8u;
    // 0x29c0a8: 0x0  nop
    ctx->pc = 0x29c0a8u;
    // NOP
    // 0x29c0ac: 0x0  nop
    ctx->pc = 0x29c0acu;
    // NOP
    // 0x29c0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c0b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29c0bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c0c0: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x29C0C0u;
    SET_GPR_U32(ctx, 31, 0x29C0C8u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x29C0C0u, 0x29C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0C8u;
label_29c0c8:
    // 0x29c0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c0cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29c0ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29c0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C0D8u;
    // 0x29c0d8: 0x0  nop
    ctx->pc = 0x29c0d8u;
    // NOP
    // 0x29c0dc: 0x0  nop
    ctx->pc = 0x29c0dcu;
    // NOP
    // 0x29c0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29c0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c0e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29c0ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29c0f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c0f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c0f8: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x29C0F8u;
    SET_GPR_U32(ctx, 31, 0x29C100u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x29C0F8u, 0x29C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C100u;
label_29c100:
    // 0x29c100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c104: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c108: 0x3e00008  jr          $ra
    ctx->pc = 0x29C108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C110u;
    // 0x29c110: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29c114: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29c118: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x29c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x29c11c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x29c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x29c120: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x29c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x29c124: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x29c128: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x29c12c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x29c130: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29c134: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29c138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29c13c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29c13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c140: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x29c140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x29c144: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c148: 0xc09d248  jal         func_274920
    ctx->pc = 0x29C148u;
    SET_GPR_U32(ctx, 31, 0x29C150u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x29C148u, 0x29C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C150u;
label_29c150:
    // 0x29c150: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29c150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c154: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x29C154u;
    {
        const bool branch_taken_0x29c154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29c154) {
            ctx->pc = 0x29C238u;
            goto label_29c238;
        }
    }
    ctx->pc = 0x29C15Cu;
    // 0x29c15c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c160: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C160u;
    {
        const bool branch_taken_0x29c160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29c160) {
            ctx->pc = 0x29C170u;
            goto label_29c170;
        }
    }
    ctx->pc = 0x29C168u;
    // 0x29c168: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x29C168u;
    {
        const bool branch_taken_0x29c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c168) {
            ctx->pc = 0x29C6DCu;
            goto label_29c6dc;
        }
    }
    ctx->pc = 0x29C170u;
label_29c170:
    // 0x29c170: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c174: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29c174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c178: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29c17c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29c180: 0x24a5d868  addiu       $a1, $a1, -0x2798
    ctx->pc = 0x29c180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957160));
    // 0x29c184: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x29C184u;
    SET_GPR_U32(ctx, 31, 0x29C18Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x29C184u, 0x29C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C18Cu;
label_29c18c:
    // 0x29c18c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x29c18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c190: 0x0  nop
    ctx->pc = 0x29c190u;
    // NOP
    // 0x29c194: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x29c194u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c198: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x29C198u;
    {
        const bool branch_taken_0x29c198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c198) {
            ctx->pc = 0x29C1B8u;
            goto label_29c1b8;
        }
    }
    ctx->pc = 0x29C1A0u;
    // 0x29c1a0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c1a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c1a8: 0xc09d250  jal         func_274940
    ctx->pc = 0x29C1A8u;
    SET_GPR_U32(ctx, 31, 0x29C1B0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29C1A8u, 0x29C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1B0u;
label_29c1b0:
    // 0x29c1b0: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x29C1B0u;
    {
        const bool branch_taken_0x29c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c1b0) {
            ctx->pc = 0x29C6DCu;
            goto label_29c6dc;
        }
    }
    ctx->pc = 0x29C1B8u;
label_29c1b8:
    // 0x29c1b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c1bc: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x29c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c1c4: 0x0  nop
    ctx->pc = 0x29c1c4u;
    // NOP
    // 0x29c1c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29c1c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c1cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29C1CCu;
    {
        const bool branch_taken_0x29c1cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c1cc) {
            ctx->pc = 0x29C1E8u;
            goto label_29c1e8;
        }
    }
    ctx->pc = 0x29C1D4u;
    // 0x29c1d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c1d8: 0xc0a71c8  jal         func_29C720
    ctx->pc = 0x29C1D8u;
    SET_GPR_U32(ctx, 31, 0x29C1E0u);
    ctx->pc = 0x29C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C720u, 0x29C1D8u, 0x29C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1E0u;
label_29c1e0:
    // 0x29c1e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c1e4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x29c1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_29c1e8:
    // 0x29c1e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c1ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29c1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c1f0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29c1f4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29c1f8: 0x24a5d868  addiu       $a1, $a1, -0x2798
    ctx->pc = 0x29c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957160));
    // 0x29c1fc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x29C1FCu;
    SET_GPR_U32(ctx, 31, 0x29C204u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x29C1FCu, 0x29C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C204u;
label_29c204:
    // 0x29c204: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29c204u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29c208: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c20c: 0xc0a71c8  jal         func_29C720
    ctx->pc = 0x29C20Cu;
    SET_GPR_U32(ctx, 31, 0x29C214u);
    ctx->pc = 0x29C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C720u, 0x29C20Cu, 0x29C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C214u;
label_29c214:
    // 0x29c214: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29c214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c218: 0x45010130  bc1t        . + 4 + (0x130 << 2)
    ctx->pc = 0x29C218u;
    {
        const bool branch_taken_0x29c218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c218) {
            ctx->pc = 0x29C6DCu;
            goto label_29c6dc;
        }
    }
    ctx->pc = 0x29C220u;
    // 0x29c220: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c224: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c228: 0xc09d250  jal         func_274940
    ctx->pc = 0x29C228u;
    SET_GPR_U32(ctx, 31, 0x29C230u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29C228u, 0x29C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C230u;
label_29c230:
    // 0x29c230: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x29C230u;
    {
        const bool branch_taken_0x29c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c230) {
            ctx->pc = 0x29C6DCu;
            goto label_29c6dc;
        }
    }
    ctx->pc = 0x29C238u;
label_29c238:
    // 0x29c238: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c23c: 0x8c56003c  lw          $s6, 0x3C($v0)
    ctx->pc = 0x29c23cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29c240: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c244: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x29C244u;
    SET_GPR_U32(ctx, 31, 0x29C24Cu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x29C244u, 0x29C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C24Cu;
label_29c24c:
    // 0x29c24c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c250: 0x240504f7  addiu       $a1, $zero, 0x4F7
    ctx->pc = 0x29c250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1271));
    // 0x29c254: 0x2786a378  addiu       $a2, $gp, -0x5C88
    ctx->pc = 0x29c254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943608));
    // 0x29c258: 0xc041a50  jal         func_106940
    ctx->pc = 0x29C258u;
    SET_GPR_U32(ctx, 31, 0x29C260u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x29C258u, 0x29C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C260u;
label_29c260:
    // 0x29c260: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x29c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x29c264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29c264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c268: 0xc040304  jal         func_100C10
    ctx->pc = 0x29C268u;
    SET_GPR_U32(ctx, 31, 0x29C270u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x29C268u, 0x29C270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C270u;
label_29c270:
    // 0x29c270: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x29c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x29c274: 0x2785a378  addiu       $a1, $gp, -0x5C88
    ctx->pc = 0x29c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943608));
    // 0x29c278: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x29C278u;
    SET_GPR_U32(ctx, 31, 0x29C280u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x29C278u, 0x29C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C280u;
label_29c280:
    // 0x29c280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C280u;
    {
        const bool branch_taken_0x29c280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c280) {
            ctx->pc = 0x29C298u;
            goto label_29c298;
        }
    }
    ctx->pc = 0x29C288u;
    // 0x29c288: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x29c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c28c: 0x8c56003c  lw          $s6, 0x3C($v0)
    ctx->pc = 0x29c28cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x29c290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C290u;
    {
        const bool branch_taken_0x29c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c290) {
            ctx->pc = 0x29C2A8u;
            goto label_29c2a8;
        }
    }
    ctx->pc = 0x29C298u;
label_29c298:
    // 0x29c298: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x29c29c: 0xc045768  jal         func_115DA0
    ctx->pc = 0x29C29Cu;
    SET_GPR_U32(ctx, 31, 0x29C2A4u);
    ctx->pc = 0x115DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA0u, 0x29C29Cu, 0x29C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2A4u;
label_29c2a4:
    // 0x29c2a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29c2a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c2a8:
    // 0x29c2a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29c2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29c2b0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29C2B0u;
    SET_GPR_U32(ctx, 31, 0x29C2B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29C2B0u, 0x29C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2B8u;
label_29c2b8:
    // 0x29c2b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29c2b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2c0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x29c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x29c2c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x29C2C4u;
    SET_GPR_U32(ctx, 31, 0x29C2CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29C2C4u, 0x29C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2CCu;
label_29c2cc:
    // 0x29c2cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x29c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x29c2d0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x29c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x29c2d4: 0xc096fec  jal         func_25BFB0
    ctx->pc = 0x29C2D4u;
    SET_GPR_U32(ctx, 31, 0x29C2DCu);
    ctx->pc = 0x25BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFB0u, 0x29C2D4u, 0x29C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2DCu;
label_29c2dc:
    // 0x29c2dc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x29c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x29c2e0: 0x101300f6  beq         $zero, $s3, . + 4 + (0xF6 << 2)
    ctx->pc = 0x29C2E0u;
    {
        const bool branch_taken_0x29c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x29c2e0) {
            ctx->pc = 0x29C6BCu;
            goto label_29c6bc;
        }
    }
    ctx->pc = 0x29C2E8u;
    // 0x29c2e8: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c2f0: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C2F0u;
    SET_GPR_U32(ctx, 31, 0x29C2F8u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C2F0u, 0x29C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2F8u;
label_29c2f8:
    // 0x29c2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2fc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29C2FCu;
    SET_GPR_U32(ctx, 31, 0x29C304u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29C2FCu, 0x29C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C304u;
label_29c304:
    // 0x29c304: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x29c304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x29c308: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x29c308u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29c30c: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x29c30cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x29c310: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c314: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x29C314u;
    SET_GPR_U32(ctx, 31, 0x29C31Cu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x29C314u, 0x29C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C31Cu;
label_29c31c:
    // 0x29c31c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c320: 0x240504f6  addiu       $a1, $zero, 0x4F6
    ctx->pc = 0x29c320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1270));
    // 0x29c324: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29c324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c328: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x29C328u;
    SET_GPR_U32(ctx, 31, 0x29C330u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x29C328u, 0x29C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C330u;
label_29c330:
    // 0x29c330: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x29c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x29c334: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c338: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x29C338u;
    SET_GPR_U32(ctx, 31, 0x29C340u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x29C338u, 0x29C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C340u;
label_29c340:
    // 0x29c340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c344: 0x240504f5  addiu       $a1, $zero, 0x4F5
    ctx->pc = 0x29c344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1269));
    // 0x29c348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c34c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x29C34Cu;
    SET_GPR_U32(ctx, 31, 0x29C354u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x29C34Cu, 0x29C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C354u;
label_29c354:
    // 0x29c354: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x29c354u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29c358: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x29c358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c35c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c360: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x29C360u;
    SET_GPR_U32(ctx, 31, 0x29C368u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x29C360u, 0x29C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C368u;
label_29c368:
    // 0x29c368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c36c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29c370: 0x24a5d878  addiu       $a1, $a1, -0x2788
    ctx->pc = 0x29c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957176));
    // 0x29c374: 0x2786a378  addiu       $a2, $gp, -0x5C88
    ctx->pc = 0x29c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943608));
    // 0x29c378: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x29C378u;
    SET_GPR_U32(ctx, 31, 0x29C380u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29C378u, 0x29C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C380u;
label_29c380:
    // 0x29c380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c384: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c388: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x29C388u;
    SET_GPR_U32(ctx, 31, 0x29C390u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x29C388u, 0x29C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C390u;
label_29c390:
    // 0x29c390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c394: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29c398: 0x24a5d890  addiu       $a1, $a1, -0x2770
    ctx->pc = 0x29c398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957200));
    // 0x29c39c: 0x2786a378  addiu       $a2, $gp, -0x5C88
    ctx->pc = 0x29c39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943608));
    // 0x29c3a0: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x29C3A0u;
    SET_GPR_U32(ctx, 31, 0x29C3A8u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29C3A0u, 0x29C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3A8u;
label_29c3a8:
    // 0x29c3a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3ac: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29c3acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29c3b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3b4: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x29c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x29c3b8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x29C3B8u;
    {
        const bool branch_taken_0x29c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3b8) {
            ctx->pc = 0x29C49Cu;
            goto label_29c49c;
        }
    }
    ctx->pc = 0x29C3C0u;
    // 0x29c3c0: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x29c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x29c3c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29C3C4u;
    {
        const bool branch_taken_0x29c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3c4) {
            ctx->pc = 0x29C43Cu;
            goto label_29c43c;
        }
    }
    ctx->pc = 0x29C3CCu;
    // 0x29c3cc: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x29c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x29c3d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29C3D0u;
    {
        const bool branch_taken_0x29c3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c3d0) {
            ctx->pc = 0x29C400u;
            goto label_29c400;
        }
    }
    ctx->pc = 0x29C3D8u;
    // 0x29c3d8: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c3dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c3e0: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C3E0u;
    SET_GPR_U32(ctx, 31, 0x29C3E8u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C3E0u, 0x29C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3E8u;
label_29c3e8:
    // 0x29c3e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3ec: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29C3ECu;
    SET_GPR_U32(ctx, 31, 0x29C3F4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29C3ECu, 0x29C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3F4u;
label_29c3f4:
    // 0x29c3f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c3fc: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x29c3fcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c400:
    // 0x29c400: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x29c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x29c404: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x29C404u;
    {
        const bool branch_taken_0x29c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c404) {
            ctx->pc = 0x29C5E0u;
            goto label_29c5e0;
        }
    }
    ctx->pc = 0x29C40Cu;
    // 0x29c40c: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c410: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29c410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29c414: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C414u;
    SET_GPR_U32(ctx, 31, 0x29C41Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C414u, 0x29C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C41Cu;
label_29c41c:
    // 0x29c41c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c420: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29C420u;
    SET_GPR_U32(ctx, 31, 0x29C428u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29C420u, 0x29C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C428u;
label_29c428:
    // 0x29c428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c430: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x29c430u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c434: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x29C434u;
    {
        const bool branch_taken_0x29c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c434) {
            ctx->pc = 0x29C5E0u;
            goto label_29c5e0;
        }
    }
    ctx->pc = 0x29C43Cu;
label_29c43c:
    // 0x29c43c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x29c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x29c440: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C440u;
    {
        const bool branch_taken_0x29c440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c440) {
            ctx->pc = 0x29C468u;
            goto label_29c468;
        }
    }
    ctx->pc = 0x29C448u;
    // 0x29c448: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c450: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C450u;
    SET_GPR_U32(ctx, 31, 0x29C458u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C450u, 0x29C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C458u;
label_29c458:
    // 0x29c458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c45c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29C45Cu;
    SET_GPR_U32(ctx, 31, 0x29C464u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29C45Cu, 0x29C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C464u;
label_29c464:
    // 0x29c464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c468:
    // 0x29c468: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x29c468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x29c46c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x29C46Cu;
    {
        const bool branch_taken_0x29c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c46c) {
            ctx->pc = 0x29C5E0u;
            goto label_29c5e0;
        }
    }
    ctx->pc = 0x29C474u;
    // 0x29c474: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c478: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c47c: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C47Cu;
    SET_GPR_U32(ctx, 31, 0x29C484u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C47Cu, 0x29C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C484u;
label_29c484:
    // 0x29c484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c488: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29C488u;
    SET_GPR_U32(ctx, 31, 0x29C490u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29C488u, 0x29C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C490u;
label_29c490:
    // 0x29c490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c494: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x29C494u;
    {
        const bool branch_taken_0x29c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c494) {
            ctx->pc = 0x29C5E0u;
            goto label_29c5e0;
        }
    }
    ctx->pc = 0x29C49Cu;
label_29c49c:
    // 0x29c49c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x29c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x29c4a0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x29C4A0u;
    {
        const bool branch_taken_0x29c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4a0) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C4A8u;
    // 0x29c4a8: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x29c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x29c4ac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29C4ACu;
    {
        const bool branch_taken_0x29c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4ac) {
            ctx->pc = 0x29C534u;
            goto label_29c534;
        }
    }
    ctx->pc = 0x29C4B4u;
    // 0x29c4b4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x29c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x29c4b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29C4B8u;
    {
        const bool branch_taken_0x29c4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4b8) {
            ctx->pc = 0x29C4F0u;
            goto label_29c4f0;
        }
    }
    ctx->pc = 0x29C4C0u;
    // 0x29c4c0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c4c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29C4C4u;
    {
        const bool branch_taken_0x29c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4c4) {
            ctx->pc = 0x29C4F0u;
            goto label_29c4f0;
        }
    }
    ctx->pc = 0x29C4CCu;
    // 0x29c4cc: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x29c4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x29c4d0: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c4d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c4d8: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C4D8u;
    SET_GPR_U32(ctx, 31, 0x29C4E0u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C4D8u, 0x29C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4E0u;
label_29c4e0:
    // 0x29c4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4e8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x29C4E8u;
    SET_GPR_U32(ctx, 31, 0x29C4F0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x29C4E8u, 0x29C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4F0u;
label_29c4f0:
    // 0x29c4f0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x29c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x29c4f4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x29C4F4u;
    {
        const bool branch_taken_0x29c4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4f4) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C4FCu;
    // 0x29c4fc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x29c4fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c500: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x29C500u;
    {
        const bool branch_taken_0x29c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c500) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C508u;
    // 0x29c508: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x29c508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x29c50c: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c510: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29c514: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C514u;
    SET_GPR_U32(ctx, 31, 0x29C51Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C514u, 0x29C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C51Cu;
label_29c51c:
    // 0x29c51c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c524: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x29C524u;
    SET_GPR_U32(ctx, 31, 0x29C52Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x29C524u, 0x29C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C52Cu;
label_29c52c:
    // 0x29c52c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x29C52Cu;
    {
        const bool branch_taken_0x29c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c52c) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C534u;
label_29c534:
    // 0x29c534: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x29c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x29c538: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29C538u;
    {
        const bool branch_taken_0x29c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c538) {
            ctx->pc = 0x29C570u;
            goto label_29c570;
        }
    }
    ctx->pc = 0x29C540u;
    // 0x29c540: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29c540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c544: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29C544u;
    {
        const bool branch_taken_0x29c544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c544) {
            ctx->pc = 0x29C570u;
            goto label_29c570;
        }
    }
    ctx->pc = 0x29C54Cu;
    // 0x29c54c: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x29c54cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x29c550: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c558: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C558u;
    SET_GPR_U32(ctx, 31, 0x29C560u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C558u, 0x29C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C560u;
label_29c560:
    // 0x29c560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c568: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x29C568u;
    SET_GPR_U32(ctx, 31, 0x29C570u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x29C568u, 0x29C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C570u;
label_29c570:
    // 0x29c570: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x29c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x29c574: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29C574u;
    {
        const bool branch_taken_0x29c574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c574) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C57Cu;
    // 0x29c57c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x29c57cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c580: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29C580u;
    {
        const bool branch_taken_0x29c580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c580) {
            ctx->pc = 0x29C5ACu;
            goto label_29c5ac;
        }
    }
    ctx->pc = 0x29C588u;
    // 0x29c588: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x29c588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x29c58c: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x29c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x29c590: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c594: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x29C594u;
    SET_GPR_U32(ctx, 31, 0x29C59Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x29C594u, 0x29C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C59Cu;
label_29c59c:
    // 0x29c59c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5a4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x29C5A4u;
    SET_GPR_U32(ctx, 31, 0x29C5ACu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x29C5A4u, 0x29C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5ACu;
label_29c5ac:
    // 0x29c5ac: 0x32420008  andi        $v0, $s2, 0x8
    ctx->pc = 0x29c5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x29c5b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29C5B0u;
    {
        const bool branch_taken_0x29c5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5b0) {
            ctx->pc = 0x29C5E0u;
            goto label_29c5e0;
        }
    }
    ctx->pc = 0x29C5B8u;
    // 0x29c5b8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29c5b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C5BCu;
    {
        const bool branch_taken_0x29c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5bc) {
            ctx->pc = 0x29C5CCu;
            goto label_29c5cc;
        }
    }
    ctx->pc = 0x29C5C4u;
    // 0x29c5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c5c8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x29c5c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c5cc:
    // 0x29c5cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x29c5ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c5d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C5D0u;
    {
        const bool branch_taken_0x29c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5d0) {
            ctx->pc = 0x29C5E0u;
            goto label_29c5e0;
        }
    }
    ctx->pc = 0x29C5D8u;
    // 0x29c5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c5dc: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x29c5dcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c5e0:
    // 0x29c5e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29c5e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5e4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29c5e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29c5e8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29C5E8u;
    {
        const bool branch_taken_0x29c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5e8) {
            ctx->pc = 0x29C650u;
            goto label_29c650;
        }
    }
    ctx->pc = 0x29C5F0u;
    // 0x29c5f0: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x29c5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x29c5f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29C5F4u;
    {
        const bool branch_taken_0x29c5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c5f4) {
            ctx->pc = 0x29C650u;
            goto label_29c650;
        }
    }
    ctx->pc = 0x29C5FCu;
    // 0x29c5fc: 0xa2340001  sb          $s4, 0x1($s1)
    ctx->pc = 0x29c5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x29c600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c608: 0xc0a821c  jal         func_2A0870
    ctx->pc = 0x29C608u;
    SET_GPR_U32(ctx, 31, 0x29C610u);
    ctx->pc = 0x2A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0870u, 0x29C608u, 0x29C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C610u;
label_29c610:
    // 0x29c610: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x29C610u;
    {
        const bool branch_taken_0x29c610 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c610) {
            ctx->pc = 0x29C63Cu;
            goto label_29c63c;
        }
    }
    ctx->pc = 0x29C618u;
    // 0x29c618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c61c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29c620: 0x24a5d8a0  addiu       $a1, $a1, -0x2760
    ctx->pc = 0x29c620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957216));
    // 0x29c624: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29c624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c628: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x29c628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c62c: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x29c62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x29c630: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x29C630u;
    SET_GPR_U32(ctx, 31, 0x29C638u);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x29C630u, 0x29C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C638u;
label_29c638:
    // 0x29c638: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x29c638u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c63c:
    // 0x29c63c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x29c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c644: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x29c644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c648: 0xc0970f4  jal         func_25C3D0
    ctx->pc = 0x29C648u;
    SET_GPR_U32(ctx, 31, 0x29C650u);
    ctx->pc = 0x25C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C3D0u, 0x29C648u, 0x29C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C650u;
label_29c650:
    // 0x29c650: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x29c650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c654: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29C654u;
    {
        const bool branch_taken_0x29c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c654) {
            ctx->pc = 0x29C6BCu;
            goto label_29c6bc;
        }
    }
    ctx->pc = 0x29C65Cu;
    // 0x29c65c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x29c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x29c660: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29C660u;
    {
        const bool branch_taken_0x29c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c660) {
            ctx->pc = 0x29C6BCu;
            goto label_29c6bc;
        }
    }
    ctx->pc = 0x29C668u;
    // 0x29c668: 0xa2140001  sb          $s4, 0x1($s0)
    ctx->pc = 0x29c668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x29c66c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c674: 0xc0a82b8  jal         func_2A0AE0
    ctx->pc = 0x29C674u;
    SET_GPR_U32(ctx, 31, 0x29C67Cu);
    ctx->pc = 0x2A0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0AE0u, 0x29C674u, 0x29C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C67Cu;
label_29c67c:
    // 0x29c67c: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x29C67Cu;
    {
        const bool branch_taken_0x29c67c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c67c) {
            ctx->pc = 0x29C6A8u;
            goto label_29c6a8;
        }
    }
    ctx->pc = 0x29C684u;
    // 0x29c684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c688: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29c688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29c68c: 0x24a5d8b0  addiu       $a1, $a1, -0x2750
    ctx->pc = 0x29c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957232));
    // 0x29c690: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29c690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c694: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x29c694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29c698: 0x240801f4  addiu       $t0, $zero, 0x1F4
    ctx->pc = 0x29c698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x29c69c: 0xc0a8484  jal         func_2A1210
    ctx->pc = 0x29C69Cu;
    SET_GPR_U32(ctx, 31, 0x29C6A4u);
    ctx->pc = 0x2A1210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1210u, 0x29C69Cu, 0x29C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6A4u;
label_29c6a4:
    // 0x29c6a4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x29c6a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c6a8:
    // 0x29c6a8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x29c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c6ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6b0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29c6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6b4: 0xc097114  jal         func_25C450
    ctx->pc = 0x29C6B4u;
    SET_GPR_U32(ctx, 31, 0x29C6BCu);
    ctx->pc = 0x25C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C450u, 0x29C6B4u, 0x29C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6BCu;
label_29c6bc:
    // 0x29c6bc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x29c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29c6c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29c6c4: 0xc09d250  jal         func_274940
    ctx->pc = 0x29C6C4u;
    SET_GPR_U32(ctx, 31, 0x29C6CCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x29C6C4u, 0x29C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6CCu;
label_29c6cc:
    // 0x29c6cc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x29c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x29c6d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29c6d4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x29C6D4u;
    SET_GPR_U32(ctx, 31, 0x29C6DCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29C6D4u, 0x29C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6DCu;
label_29c6dc:
    // 0x29c6dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29c6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29c6e0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x29c6e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29c6e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x29c6e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29c6e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x29c6e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29c6ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29c6ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29c6f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29c6f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c6f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29c6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c6f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29c6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c6fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29c6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29c700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c704: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c708: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x29c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x29c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C714u;
    // 0x29c714: 0x0  nop
    ctx->pc = 0x29c714u;
    // NOP
    // 0x29c718: 0x0  nop
    ctx->pc = 0x29c718u;
    // NOP
    // 0x29c71c: 0x0  nop
    ctx->pc = 0x29c71cu;
    // NOP
    ctx->pc = 0x29c720u;
}
