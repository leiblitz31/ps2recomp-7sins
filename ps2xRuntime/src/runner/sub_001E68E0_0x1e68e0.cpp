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

// Function: sub_001E68E0
// Address: 0x1e68e0 - 0x1e6980
void sub_001E68E0_0x1e68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E68E0_0x1e68e0");
#endif

    switch (ctx->pc) {
        case 0x1e6908u: goto label_1e6908;
        default: break;
    }

    ctx->pc = 0x1e68e0u;

    // 0x1e68e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e68e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e68e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e68e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e68e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e68ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e68f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e68f4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e68f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e68f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e68fc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e6900: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E6900u;
    SET_GPR_U32(ctx, 31, 0x1E6908u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E6900u, 0x1E6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6908u;
label_1e6908:
    // 0x1e6908: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e690c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1e690cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6910: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6918: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x1e6918u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e691c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1e691cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6920: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6928: 0xc441014c  lwc1        $f1, 0x14C($v0)
    ctx->pc = 0x1e6928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e692c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1e692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1e6930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6934: 0x0  nop
    ctx->pc = 0x1e6934u;
    // NOP
    // 0x1e6938: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e6938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e693c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E693Cu;
    {
        const bool branch_taken_0x1e693c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e693c) {
            ctx->pc = 0x1E6954u;
            goto label_1e6954;
        }
    }
    ctx->pc = 0x1E6944u;
    // 0x1e6944: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e6944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e6948: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e6948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e694c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E694Cu;
    {
        const bool branch_taken_0x1e694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e694c) {
            ctx->pc = 0x1E6968u;
            goto label_1e6968;
        }
    }
    ctx->pc = 0x1E6954u;
label_1e6954:
    // 0x1e6954: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e6954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6958: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e6958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e695c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e695cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e6960: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e6964: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e6964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e6968:
    // 0x1e6968: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e6968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e696c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6974: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e6974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e6978: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6980u;
}
