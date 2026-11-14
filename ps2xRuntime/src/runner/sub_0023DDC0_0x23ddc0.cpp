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

// Function: sub_0023DDC0
// Address: 0x23ddc0 - 0x23de40
void sub_0023DDC0_0x23ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DDC0_0x23ddc0");
#endif

    switch (ctx->pc) {
        case 0x23de24u: goto label_23de24;
        default: break;
    }

    ctx->pc = 0x23ddc0u;

    // 0x23ddc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x23ddc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ddc8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x23ddcc: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x23ddd0: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x23ddd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23ddd4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x23ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23ddd8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x23ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x23dddc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23dde0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23dde4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DDE4u;
    {
        const bool branch_taken_0x23dde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dde4) {
            ctx->pc = 0x23DE00u;
            goto label_23de00;
        }
    }
    ctx->pc = 0x23DDECu;
    // 0x23ddec: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
    // 0x23ddf0: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x23ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x23ddf4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x23ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x23ddf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23DDF8u;
    {
        const bool branch_taken_0x23ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ddf8) {
            ctx->pc = 0x23DE08u;
            goto label_23de08;
        }
    }
    ctx->pc = 0x23DE00u;
label_23de00:
    // 0x23de00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23de04: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x23de04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_23de08:
    // 0x23de08: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x23de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23de0c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23de0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23de10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23de14: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23de18: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23de1c: 0xc08f584  jal         func_23D610
    ctx->pc = 0x23DE1Cu;
    SET_GPR_U32(ctx, 31, 0x23DE24u);
    ctx->pc = 0x23D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D610u, 0x23DE1Cu, 0x23DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE24u;
label_23de24:
    // 0x23de24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23de24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23de28: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x23de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23de2c: 0x3e00008  jr          $ra
    ctx->pc = 0x23DE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DE34u;
    // 0x23de34: 0x0  nop
    ctx->pc = 0x23de34u;
    // NOP
    // 0x23de38: 0x0  nop
    ctx->pc = 0x23de38u;
    // NOP
    // 0x23de3c: 0x0  nop
    ctx->pc = 0x23de3cu;
    // NOP
    ctx->pc = 0x23de40u;
}
