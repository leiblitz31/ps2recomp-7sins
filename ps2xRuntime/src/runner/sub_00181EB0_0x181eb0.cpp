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

// Function: sub_00181EB0
// Address: 0x181eb0 - 0x181f40
void sub_00181EB0_0x181eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181EB0_0x181eb0");
#endif

    switch (ctx->pc) {
        case 0x181f08u: goto label_181f08;
        case 0x181f20u: goto label_181f20;
        default: break;
    }

    ctx->pc = 0x181eb0u;

    // 0x181eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181eb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x181eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x181ebc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x181ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x181ec0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x181ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181ec4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x181ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181ec8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181ecc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x181eccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x181ed0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x181ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181ed4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x181ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ed8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181edc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x181edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x181ee0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x181ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181ee4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x181ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ee8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181eec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x181eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x181ef0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x181ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181ef4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x181ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181ef8: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x181ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x181efc: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x181efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x181f00: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x181F00u;
    SET_GPR_U32(ctx, 31, 0x181F08u);
    ctx->pc = 0x1822F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822F0u, 0x181F00u, 0x181F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F08u;
label_181f08:
    // 0x181f08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x181f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181f0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x181f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181f10: 0x24640084  addiu       $a0, $v1, 0x84
    ctx->pc = 0x181f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x181f14: 0x24450084  addiu       $a1, $v0, 0x84
    ctx->pc = 0x181f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x181f18: 0xc060830  jal         func_1820C0
    ctx->pc = 0x181F18u;
    SET_GPR_U32(ctx, 31, 0x181F20u);
    ctx->pc = 0x1820C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1820C0u, 0x181F18u, 0x181F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F20u;
label_181f20:
    // 0x181f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x181f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x181f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x181F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181F34u;
    // 0x181f34: 0x0  nop
    ctx->pc = 0x181f34u;
    // NOP
    // 0x181f38: 0x0  nop
    ctx->pc = 0x181f38u;
    // NOP
    // 0x181f3c: 0x0  nop
    ctx->pc = 0x181f3cu;
    // NOP
    ctx->pc = 0x181f40u;
}
