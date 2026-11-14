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

// Function: sub_00207A10
// Address: 0x207a10 - 0x207b00
void sub_00207A10_0x207a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A10_0x207a10");
#endif

    switch (ctx->pc) {
        case 0x207a2cu: goto label_207a2c;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a5cu: goto label_207a5c;
        case 0x207a6cu: goto label_207a6c;
        case 0x207a7cu: goto label_207a7c;
        case 0x207a8cu: goto label_207a8c;
        case 0x207ac0u: goto label_207ac0;
        case 0x207ad4u: goto label_207ad4;
        default: break;
    }

    ctx->pc = 0x207a10u;

    // 0x207a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207a1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207a24: 0xc064924  jal         func_192490
    ctx->pc = 0x207A24u;
    SET_GPR_U32(ctx, 31, 0x207A2Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x207A24u, 0x207A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A2Cu;
label_207a2c:
    // 0x207a2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x207a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x207a30: 0x246350c0  addiu       $v1, $v1, 0x50C0
    ctx->pc = 0x207a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20672));
    // 0x207a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x207a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a40: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x207a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x207a44: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x207A44u;
    SET_GPR_U32(ctx, 31, 0x207A4Cu);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x207A44u, 0x207A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A4Cu;
label_207a4c:
    // 0x207a4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a50: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x207a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x207a54: 0xc08211c  jal         func_208470
    ctx->pc = 0x207A54u;
    SET_GPR_U32(ctx, 31, 0x207A5Cu);
    ctx->pc = 0x208470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208470u, 0x207A54u, 0x207A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A5Cu;
label_207a5c:
    // 0x207a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a60: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x207a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x207a64: 0xc08211c  jal         func_208470
    ctx->pc = 0x207A64u;
    SET_GPR_U32(ctx, 31, 0x207A6Cu);
    ctx->pc = 0x208470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208470u, 0x207A64u, 0x207A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A6Cu;
label_207a6c:
    // 0x207a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a70: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x207a74: 0xc0820c4  jal         func_208310
    ctx->pc = 0x207A74u;
    SET_GPR_U32(ctx, 31, 0x207A7Cu);
    ctx->pc = 0x208310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208310u, 0x207A74u, 0x207A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A7Cu;
label_207a7c:
    // 0x207a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a80: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x207a84: 0xc08206c  jal         func_2081B0
    ctx->pc = 0x207A84u;
    SET_GPR_U32(ctx, 31, 0x207A8Cu);
    ctx->pc = 0x2081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2081B0u, 0x207A84u, 0x207A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207A8Cu;
label_207a8c:
    // 0x207a8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a90: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x207a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x207a94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207a98: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x207a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x207a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207aa0: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x207aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x207aa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207aa8: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x207aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x207aac: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x207aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x207ab0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x207ab4: 0x24a592b0  addiu       $a1, $a1, -0x6D50
    ctx->pc = 0x207ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939312));
    // 0x207ab8: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x207AB8u;
    SET_GPR_U32(ctx, 31, 0x207AC0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x207AB8u, 0x207AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AC0u;
label_207ac0:
    // 0x207ac0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ac4: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x207ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x207ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207acc: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x207ACCu;
    SET_GPR_U32(ctx, 31, 0x207AD4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x207ACCu, 0x207AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AD4u;
label_207ad4:
    // 0x207ad4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ad8: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x207ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x207adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ae0: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x207ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x207ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207aec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x207aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x207af0: 0x3e00008  jr          $ra
    ctx->pc = 0x207AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207AF8u;
    // 0x207af8: 0x0  nop
    ctx->pc = 0x207af8u;
    // NOP
    // 0x207afc: 0x0  nop
    ctx->pc = 0x207afcu;
    // NOP
    ctx->pc = 0x207b00u;
}
