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

// Function: sub_00193490
// Address: 0x193490 - 0x193520
void sub_00193490_0x193490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193490_0x193490");
#endif

    switch (ctx->pc) {
        case 0x1934f4u: goto label_1934f4;
        default: break;
    }

    ctx->pc = 0x193490u;

    // 0x193490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x193498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19349c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x19349cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1934a0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1934a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1934a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1934a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934ac: 0x0  nop
    ctx->pc = 0x1934acu;
    // NOP
    // 0x1934b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1934b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1934B4u;
    {
        const bool branch_taken_0x1934b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934b4) {
            ctx->pc = 0x1934CCu;
            goto label_1934cc;
        }
    }
    ctx->pc = 0x1934BCu;
    // 0x1934bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1934bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1934c0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1934c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1934c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1934C4u;
    {
        const bool branch_taken_0x1934c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1934c4) {
            ctx->pc = 0x1934E0u;
            goto label_1934e0;
        }
    }
    ctx->pc = 0x1934CCu;
label_1934cc:
    // 0x1934cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1934ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1934d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1934d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1934d4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1934d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1934d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1934d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1934dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1934dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1934e0:
    // 0x1934e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1934e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1934e4: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1934e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1934e8: 0x27859238  addiu       $a1, $gp, -0x6DC8
    ctx->pc = 0x1934e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939192));
    // 0x1934ec: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1934ECu;
    SET_GPR_U32(ctx, 31, 0x1934F4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1934ECu, 0x1934F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1934F4u;
label_1934f4:
    // 0x1934f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1934f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1934f8: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1934f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1934fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1934fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193500: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x193500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x193504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193508: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x193508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19350c: 0x3e00008  jr          $ra
    ctx->pc = 0x19350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193514u;
    // 0x193514: 0x0  nop
    ctx->pc = 0x193514u;
    // NOP
    // 0x193518: 0x0  nop
    ctx->pc = 0x193518u;
    // NOP
    // 0x19351c: 0x0  nop
    ctx->pc = 0x19351cu;
    // NOP
    ctx->pc = 0x193520u;
}
