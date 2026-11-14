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

// Function: sub_002E53A0
// Address: 0x2e53a0 - 0x2e54e0
void sub_002E53A0_0x2e53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E53A0_0x2e53a0");
#endif

    switch (ctx->pc) {
        case 0x2e53d8u: goto label_2e53d8;
        case 0x2e53e8u: goto label_2e53e8;
        case 0x2e53fcu: goto label_2e53fc;
        case 0x2e5430u: goto label_2e5430;
        case 0x2e54acu: goto label_2e54ac;
        default: break;
    }

    ctx->pc = 0x2e53a0u;

    // 0x2e53a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e53a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e53a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e53a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e53ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e53acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e53b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e53b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e53b4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2e53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2e53b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e53bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e53c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e53c4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e53c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e53cc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e53ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e53d0: 0xc0b91dc  jal         func_2E4770
    ctx->pc = 0x2E53D0u;
    SET_GPR_U32(ctx, 31, 0x2E53D8u);
    ctx->pc = 0x2E4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4770u, 0x2E53D0u, 0x2E53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53D8u;
label_2e53d8:
    // 0x2e53d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e53d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e53dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53e0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2E53E0u;
    {
        const bool branch_taken_0x2e53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e53e0) {
            ctx->pc = 0x2E54B8u;
            goto label_2e54b8;
        }
    }
    ctx->pc = 0x2E53E8u;
label_2e53e8:
    // 0x2e53e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e53ec: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e53ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e53f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e53f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53f4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E53F4u;
    SET_GPR_U32(ctx, 31, 0x2E53FCu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E53F4u, 0x2E53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53FCu;
label_2e53fc:
    // 0x2e53fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5400: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5404: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e5404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5408: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2e5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e540c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2e540cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2e5410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5414: 0x0  nop
    ctx->pc = 0x2e5414u;
    // NOP
    // 0x2e5418: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e541c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2e541cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5420: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2E5420u;
    {
        const bool branch_taken_0x2e5420 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5420) {
            ctx->pc = 0x2E54B4u;
            goto label_2e54b4;
        }
    }
    ctx->pc = 0x2E5428u;
    // 0x2e5428: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2E5428u;
    SET_GPR_U32(ctx, 31, 0x2E5430u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2E5428u, 0x2E5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5430u;
label_2e5430:
    // 0x2e5430: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5430u;
    {
        const bool branch_taken_0x2e5430 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e5430) {
            ctx->pc = 0x2E544Cu;
            goto label_2e544c;
        }
    }
    ctx->pc = 0x2E5438u;
    // 0x2e5438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e543c: 0x0  nop
    ctx->pc = 0x2e543cu;
    // NOP
    // 0x2e5440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e5440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5444: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5444u;
    {
        const bool branch_taken_0x2e5444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5444) {
            ctx->pc = 0x2E5468u;
            goto label_2e5468;
        }
    }
    ctx->pc = 0x2E544Cu;
label_2e544c:
    // 0x2e544c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e544cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e5450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e5450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e5454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e545c: 0x0  nop
    ctx->pc = 0x2e545cu;
    // NOP
    // 0x2e5460: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e5460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5464: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e5464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e5468:
    // 0x2e5468: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e5468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e546c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5470: 0x0  nop
    ctx->pc = 0x2e5470u;
    // NOP
    // 0x2e5474: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2e5474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e5478: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e5478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e547c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5480: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e5480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5484: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e548c: 0x0  nop
    ctx->pc = 0x2e548cu;
    // NOP
    // 0x2e5490: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e5490u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2e5494: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x2e5494u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e5498: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e549c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e54a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e54a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e54a4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E54A4u;
    SET_GPR_U32(ctx, 31, 0x2E54ACu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E54A4u, 0x2E54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54ACu;
label_2e54ac:
    // 0x2e54ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e54acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e54b0: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x2e54b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2e54b4:
    // 0x2e54b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e54b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e54b8:
    // 0x2e54b8: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2e54b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e54bc: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2E54BCu;
    {
        const bool branch_taken_0x2e54bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e54bc) {
            ctx->pc = 0x2E53E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e53e8;
        }
    }
    ctx->pc = 0x2E54C4u;
    // 0x2e54c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e54c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e54c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e54c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e54cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e54ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e54d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e54d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e54d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e54d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e54d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E54D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E54D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E54E0u;
}
