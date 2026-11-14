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

// Function: sub_00233580
// Address: 0x233580 - 0x233630
void sub_00233580_0x233580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233580_0x233580");
#endif

    switch (ctx->pc) {
        case 0x23359cu: goto label_23359c;
        default: break;
    }

    ctx->pc = 0x233580u;

    // 0x233580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x233588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23358c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233590: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x233594: 0xc08ce28  jal         func_2338A0
    ctx->pc = 0x233594u;
    SET_GPR_U32(ctx, 31, 0x23359Cu);
    ctx->pc = 0x2338A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2338A0u, 0x233594u, 0x23359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23359Cu;
label_23359c:
    // 0x23359c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2335a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2335a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2335a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2335a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2335ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2335acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2335b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2335b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2335b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2335b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2335bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2335bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2335c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2335c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2335c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2335c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2335cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2335ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335d4: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x2335d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2335d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2335d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335e0: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x2335e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x2335e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2335e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335ec: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x2335ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x2335f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335f4: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x2335f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2335f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2335f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2335fc: 0xa040000e  sb          $zero, 0xE($v0)
    ctx->pc = 0x2335fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x233600: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x233600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x233604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x233604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23360c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x233610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233618: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x233618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23361c: 0x3e00008  jr          $ra
    ctx->pc = 0x23361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233624u;
    // 0x233624: 0x0  nop
    ctx->pc = 0x233624u;
    // NOP
    // 0x233628: 0x0  nop
    ctx->pc = 0x233628u;
    // NOP
    // 0x23362c: 0x0  nop
    ctx->pc = 0x23362cu;
    // NOP
    ctx->pc = 0x233630u;
}
