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

// Function: sub_0027FFE0
// Address: 0x27ffe0 - 0x280090
void sub_0027FFE0_0x27ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FFE0_0x27ffe0");
#endif

    switch (ctx->pc) {
        case 0x280000u: goto label_280000;
        case 0x280070u: goto label_280070;
        default: break;
    }

    ctx->pc = 0x27ffe0u;

    // 0x27ffe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ffe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ffe8: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x27ffe8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27ffec: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x27ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27fff0: 0xc780a248  lwc1        $f0, -0x5DB8($gp)
    ctx->pc = 0x27fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fff4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x27fff4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27fff8: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x27FFF8u;
    SET_GPR_U32(ctx, 31, 0x280000u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x27FFF8u, 0x280000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280000u;
label_280000:
    // 0x280000: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x280000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x280004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280008: 0x0  nop
    ctx->pc = 0x280008u;
    // NOP
    // 0x28000c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28000cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280010: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x280010u;
    {
        const bool branch_taken_0x280010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280010) {
            ctx->pc = 0x280070u;
            goto label_280070;
        }
    }
    ctx->pc = 0x280018u;
    // 0x280018: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x280018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28001c: 0xe780a248  swc1        $f0, -0x5DB8($gp)
    ctx->pc = 0x28001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), bits); }
    // 0x280020: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x280020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280024: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x280024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x280028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28002c: 0x0  nop
    ctx->pc = 0x28002cu;
    // NOP
    // 0x280030: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280034: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280034u;
    {
        const bool branch_taken_0x280034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280034) {
            ctx->pc = 0x28004Cu;
            goto label_28004c;
        }
    }
    ctx->pc = 0x28003Cu;
    // 0x28003c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28003cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280040: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280044: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280044u;
    {
        const bool branch_taken_0x280044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280044) {
            ctx->pc = 0x280060u;
            goto label_280060;
        }
    }
    ctx->pc = 0x28004Cu;
label_28004c:
    // 0x28004c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28004cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280050: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280054: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x280054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x280058: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28005c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x28005cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_280060:
    // 0x280060: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x280064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280068: 0xc08d48c  jal         func_235230
    ctx->pc = 0x280068u;
    SET_GPR_U32(ctx, 31, 0x280070u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x280068u, 0x280070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280070u;
label_280070:
    // 0x280070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280078: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28007c: 0x3e00008  jr          $ra
    ctx->pc = 0x28007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28007Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280084u;
    // 0x280084: 0x0  nop
    ctx->pc = 0x280084u;
    // NOP
    // 0x280088: 0x0  nop
    ctx->pc = 0x280088u;
    // NOP
    // 0x28008c: 0x0  nop
    ctx->pc = 0x28008cu;
    // NOP
    ctx->pc = 0x280090u;
}
