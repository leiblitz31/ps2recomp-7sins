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

// Function: sub_002849D0
// Address: 0x2849d0 - 0x284a60
void sub_002849D0_0x2849d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002849D0_0x2849d0");
#endif

    switch (ctx->pc) {
        case 0x2849ecu: goto label_2849ec;
        case 0x284a24u: goto label_284a24;
        case 0x284a34u: goto label_284a34;
        case 0x284a44u: goto label_284a44;
        default: break;
    }

    ctx->pc = 0x2849d0u;

    // 0x2849d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2849d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2849d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2849d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2849d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2849d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2849dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2849dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2849e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2849e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2849e4: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2849E4u;
    SET_GPR_U32(ctx, 31, 0x2849ECu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2849E4u, 0x2849ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2849ECu;
label_2849ec:
    // 0x2849ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2849ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2849f0: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x2849f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
    // 0x2849f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2849f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2849f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2849f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2849fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2849fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a00: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x284a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x284a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a08: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x284a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x284a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a10: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x284a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x284a14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a18: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x284a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x284a1c: 0xc0a1578  jal         func_2855E0
    ctx->pc = 0x284A1Cu;
    SET_GPR_U32(ctx, 31, 0x284A24u);
    ctx->pc = 0x2855E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855E0u, 0x284A1Cu, 0x284A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A24u;
label_284a24:
    // 0x284a24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a28: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x284a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x284a2c: 0xc0a14d4  jal         func_285350
    ctx->pc = 0x284A2Cu;
    SET_GPR_U32(ctx, 31, 0x284A34u);
    ctx->pc = 0x285350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285350u, 0x284A2Cu, 0x284A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A34u;
label_284a34:
    // 0x284a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a38: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x284a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x284a3c: 0xc0a147c  jal         func_2851F0
    ctx->pc = 0x284A3Cu;
    SET_GPR_U32(ctx, 31, 0x284A44u);
    ctx->pc = 0x2851F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851F0u, 0x284A3Cu, 0x284A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A44u;
label_284a44:
    // 0x284a44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284a4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x284a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x284a50: 0x3e00008  jr          $ra
    ctx->pc = 0x284A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284A58u;
    // 0x284a58: 0x0  nop
    ctx->pc = 0x284a58u;
    // NOP
    // 0x284a5c: 0x0  nop
    ctx->pc = 0x284a5cu;
    // NOP
    ctx->pc = 0x284a60u;
}
