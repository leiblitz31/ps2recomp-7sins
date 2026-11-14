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

// Function: sub_0018E580
// Address: 0x18e580 - 0x18e620
void sub_0018E580_0x18e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E580_0x18e580");
#endif

    switch (ctx->pc) {
        case 0x18e5f4u: goto label_18e5f4;
        case 0x18e60cu: goto label_18e60c;
        default: break;
    }

    ctx->pc = 0x18e580u;

    // 0x18e580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18e584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18e588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18e58c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18e590: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x18e590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x18e594: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x18e594u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18e598: 0xe7ad0050  swc1        $f13, 0x50($sp)
    ctx->pc = 0x18e598u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18e59c: 0xe7ae0060  swc1        $f14, 0x60($sp)
    ctx->pc = 0x18e59cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18e5a0: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x18e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x18e5a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5a8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x18e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x18e5ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e5b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18e5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18e5b8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x18e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18e5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18e5c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x18e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18e5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18e5d0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x18e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e5d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5d8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18e5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18e5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5e0: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x18e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18e5e4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x18e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18e5e8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x18e5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x18e5ec: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x18E5ECu;
    SET_GPR_U32(ctx, 31, 0x18E5F4u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x18E5ECu, 0x18E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5F4u;
label_18e5f4:
    // 0x18e5f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5f8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x18e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18e5fc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e600: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x18e604: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x18E604u;
    SET_GPR_U32(ctx, 31, 0x18E60Cu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x18E604u, 0x18E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e614: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x18e614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18e618: 0x3e00008  jr          $ra
    ctx->pc = 0x18E618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E620u;
}
