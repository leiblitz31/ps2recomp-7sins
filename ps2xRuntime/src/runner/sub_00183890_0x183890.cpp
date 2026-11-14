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

// Function: sub_00183890
// Address: 0x183890 - 0x183920
void sub_00183890_0x183890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183890_0x183890");
#endif

    switch (ctx->pc) {
        case 0x1838acu: goto label_1838ac;
        case 0x1838ccu: goto label_1838cc;
        case 0x1838dcu: goto label_1838dc;
        case 0x183904u: goto label_183904;
        default: break;
    }

    ctx->pc = 0x183890u;

    // 0x183890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x183894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18389c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838a0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1838a4: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x1838A4u;
    SET_GPR_U32(ctx, 31, 0x1838ACu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x1838A4u, 0x1838ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838ACu;
label_1838ac:
    // 0x1838ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1838acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1838b0: 0x24633fb0  addiu       $v1, $v1, 0x3FB0
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16304));
    // 0x1838b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1838b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1838bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1838bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838c0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1838c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1838c4: 0xc0610e4  jal         func_184390
    ctx->pc = 0x1838C4u;
    SET_GPR_U32(ctx, 31, 0x1838CCu);
    ctx->pc = 0x184390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184390u, 0x1838C4u, 0x1838CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838CCu;
label_1838cc:
    // 0x1838cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1838ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838d0: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x1838d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1838d4: 0xc06108c  jal         func_184230
    ctx->pc = 0x1838D4u;
    SET_GPR_U32(ctx, 31, 0x1838DCu);
    ctx->pc = 0x184230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184230u, 0x1838D4u, 0x1838DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838DCu;
label_1838dc:
    // 0x1838dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838e0: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1838e4: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1838e8: 0x24a53fc0  addiu       $a1, $a1, 0x3FC0
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16320));
    // 0x1838ec: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x1838f0: 0x24c63d20  addiu       $a2, $a2, 0x3D20
    ctx->pc = 0x1838f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15648));
    // 0x1838f4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1838f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1838f8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1838f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1838fc: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x1838FCu;
    SET_GPR_U32(ctx, 31, 0x183904u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x1838FCu, 0x183904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183904u;
label_183904:
    // 0x183904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18390c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18390cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183910: 0x3e00008  jr          $ra
    ctx->pc = 0x183910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183918u;
    // 0x183918: 0x0  nop
    ctx->pc = 0x183918u;
    // NOP
    // 0x18391c: 0x0  nop
    ctx->pc = 0x18391cu;
    // NOP
    ctx->pc = 0x183920u;
}
