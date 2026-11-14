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

// Function: sub_00149B70
// Address: 0x149b70 - 0x149c10
void sub_00149B70_0x149b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B70_0x149b70");
#endif

    switch (ctx->pc) {
        case 0x149bacu: goto label_149bac;
        case 0x149bc8u: goto label_149bc8;
        default: break;
    }

    ctx->pc = 0x149b70u;

    // 0x149b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x149b84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b88: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x149b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149b8c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x149b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x149b90: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40
    ctx->pc = 0x149b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
    // 0x149b94: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x149b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x149b98: 0x24c6a140  addiu       $a2, $a2, -0x5EC0
    ctx->pc = 0x149b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943040));
    // 0x149b9c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x149b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x149ba0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x149ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149ba4: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x149BA4u;
    SET_GPR_U32(ctx, 31, 0x149BACu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x149BA4u, 0x149BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BACu;
label_149bac:
    // 0x149bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149bb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bb4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x149bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x149bb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bbc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x149bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x149bc0: 0xc0527ac  jal         func_149EB0
    ctx->pc = 0x149BC0u;
    SET_GPR_U32(ctx, 31, 0x149BC8u);
    ctx->pc = 0x149EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB0u, 0x149BC0u, 0x149BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BC8u;
label_149bc8:
    // 0x149bc8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x149bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x149bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bd0: 0xa0430024  sb          $v1, 0x24($v0)
    ctx->pc = 0x149bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x149bd4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x149bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x149bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bdc: 0xa0430025  sb          $v1, 0x25($v0)
    ctx->pc = 0x149bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x149be0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x149be4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149be8: 0xa0430026  sb          $v1, 0x26($v0)
    ctx->pc = 0x149be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x149bec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x149becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x149bf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bf4: 0xa0430027  sb          $v1, 0x27($v0)
    ctx->pc = 0x149bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x149bf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149c04: 0x3e00008  jr          $ra
    ctx->pc = 0x149C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C0Cu;
    // 0x149c0c: 0x0  nop
    ctx->pc = 0x149c0cu;
    // NOP
    ctx->pc = 0x149c10u;
}
