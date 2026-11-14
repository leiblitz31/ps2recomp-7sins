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

// Function: sub_002B5AA0
// Address: 0x2b5aa0 - 0x2b5b50
void sub_002B5AA0_0x2b5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5AA0_0x2b5aa0");
#endif

    switch (ctx->pc) {
        case 0x2b5abcu: goto label_2b5abc;
        case 0x2b5b2cu: goto label_2b5b2c;
        default: break;
    }

    ctx->pc = 0x2b5aa0u;

    // 0x2b5aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5aa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b5aac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b5ab0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ab4: 0xc0ad638  jal         func_2B58E0
    ctx->pc = 0x2B5AB4u;
    SET_GPR_U32(ctx, 31, 0x2B5ABCu);
    ctx->pc = 0x2B58E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B58E0u, 0x2B5AB4u, 0x2B5ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5ABCu;
label_2b5abc:
    // 0x2b5abc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b5ac0: 0x246366b0  addiu       $v1, $v1, 0x66B0
    ctx->pc = 0x2b5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26288));
    // 0x2b5ac4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ac8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b5acc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2b5accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2b5ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5ad4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ad8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2b5ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2b5adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ae0: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x2b5ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ae8: 0xa040002d  sb          $zero, 0x2D($v0)
    ctx->pc = 0x2b5ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5aec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5af0: 0xa040002e  sb          $zero, 0x2E($v0)
    ctx->pc = 0x2b5af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5af4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2b5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2b5af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5afc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b00: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b5b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b5b04: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b0c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2b5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2b5b10: 0x8f82bca4  lw          $v0, -0x435C($gp)
    ctx->pc = 0x2b5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950052)));
    // 0x2b5b14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b5b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b5b18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b5b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b5b1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5B1Cu;
    {
        const bool branch_taken_0x2b5b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b1c) {
            ctx->pc = 0x2B5B30u;
            goto label_2b5b30;
        }
    }
    ctx->pc = 0x2B5B24u;
    // 0x2b5b24: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x2B5B24u;
    SET_GPR_U32(ctx, 31, 0x2B5B2Cu);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x2B5B24u, 0x2B5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B2Cu;
label_2b5b2c:
    // 0x2b5b2c: 0xaf82bca0  sw          $v0, -0x4360($gp)
    ctx->pc = 0x2b5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950048), GPR_U32(ctx, 2));
label_2b5b30:
    // 0x2b5b30: 0x8f82bca4  lw          $v0, -0x435C($gp)
    ctx->pc = 0x2b5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950052)));
    // 0x2b5b34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5b38: 0xaf82bca4  sw          $v0, -0x435C($gp)
    ctx->pc = 0x2b5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950052), GPR_U32(ctx, 2));
    // 0x2b5b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b5b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B50u;
}
