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

// Function: sub_001DB8F0
// Address: 0x1db8f0 - 0x1dbaa0
void sub_001DB8F0_0x1db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB8F0_0x1db8f0");
#endif

    switch (ctx->pc) {
        case 0x1db928u: goto label_1db928;
        case 0x1db940u: goto label_1db940;
        case 0x1db954u: goto label_1db954;
        case 0x1db968u: goto label_1db968;
        case 0x1db97cu: goto label_1db97c;
        case 0x1db9c8u: goto label_1db9c8;
        case 0x1db9d8u: goto label_1db9d8;
        case 0x1db9e4u: goto label_1db9e4;
        default: break;
    }

    ctx->pc = 0x1db8f0u;

    // 0x1db8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db8f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1db8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1db8fc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1db8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db900: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db904: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db908: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1db908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db90c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1db90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db910: 0xc4cc0064  lwc1        $f12, 0x64($a2)
    ctx->pc = 0x1db910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db914: 0xc4ad0070  lwc1        $f13, 0x70($a1)
    ctx->pc = 0x1db914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1db918: 0xc46e0068  lwc1        $f14, 0x68($v1)
    ctx->pc = 0x1db918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1db91c: 0xc44f006c  lwc1        $f15, 0x6C($v0)
    ctx->pc = 0x1db91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1db920: 0xc076d14  jal         func_1DB450
    ctx->pc = 0x1DB920u;
    SET_GPR_U32(ctx, 31, 0x1DB928u);
    ctx->pc = 0x1DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB450u, 0x1DB920u, 0x1DB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB928u;
label_1db928:
    // 0x1db928: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1DB928u;
    {
        const bool branch_taken_0x1db928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db928) {
            ctx->pc = 0x1DBA8Cu;
            goto label_1dba8c;
        }
    }
    ctx->pc = 0x1DB930u;
    // 0x1db930: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1db930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db934: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db938: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB938u;
    SET_GPR_U32(ctx, 31, 0x1DB940u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB938u, 0x1DB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB940u;
label_1db940:
    // 0x1db940: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1db940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db944: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1db948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db94c: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1DB94Cu;
    SET_GPR_U32(ctx, 31, 0x1DB954u);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1DB94Cu, 0x1DB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB954u;
label_1db954:
    // 0x1db954: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1db954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1db958: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db95c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db960: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB960u;
    SET_GPR_U32(ctx, 31, 0x1DB968u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB960u, 0x1DB968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB968u;
label_1db968:
    // 0x1db968: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1db968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db96c: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1db970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db974: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1DB974u;
    SET_GPR_U32(ctx, 31, 0x1DB97Cu);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1DB974u, 0x1DB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB97Cu;
label_1db97c:
    // 0x1db97c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1db97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1db980: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1db980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db984: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1db984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db988: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1db988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1db98c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1db98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1db990: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1db990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db998: 0x0  nop
    ctx->pc = 0x1db998u;
    // NOP
    // 0x1db99c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1db99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db9a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB9A0u;
    {
        const bool branch_taken_0x1db9a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db9a0) {
            ctx->pc = 0x1DB9B4u;
            goto label_1db9b4;
        }
    }
    ctx->pc = 0x1DB9A8u;
    // 0x1db9a8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1db9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db9ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1db9acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1db9b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1db9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1db9b4:
    // 0x1db9b4: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x1db9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db9b8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1db9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db9bc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1db9bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db9c0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1DB9C0u;
    SET_GPR_U32(ctx, 31, 0x1DB9C8u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1DB9C0u, 0x1DB9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB9C8u;
label_1db9c8:
    // 0x1db9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9cc: 0xdf858028  ld          $a1, -0x7FD8($gp)
    ctx->pc = 0x1db9ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934568)));
    // 0x1db9d0: 0xc0c39be  jal         func_30E6F8
    ctx->pc = 0x1DB9D0u;
    SET_GPR_U32(ctx, 31, 0x1DB9D8u);
    ctx->pc = 0x30E6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E6F8u, 0x1DB9D0u, 0x1DB9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB9D8u;
label_1db9d8:
    // 0x1db9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9dc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1DB9DCu;
    SET_GPR_U32(ctx, 31, 0x1DB9E4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1DB9DCu, 0x1DB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB9E4u;
label_1db9e4:
    // 0x1db9e4: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x1db9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db9e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1db9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1db9ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1db9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1db9f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1db9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db9f4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1db9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db9fc: 0x0  nop
    ctx->pc = 0x1db9fcu;
    // NOP
    // 0x1dba00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dba00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dba04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBA04u;
    {
        const bool branch_taken_0x1dba04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dba04) {
            ctx->pc = 0x1DBA20u;
            goto label_1dba20;
        }
    }
    ctx->pc = 0x1DBA0Cu;
    // 0x1dba0c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1dba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1dba10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dba10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dba14: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dba18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dba18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dba1c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1dba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1dba20:
    // 0x1dba20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dba24: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1dba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dba28: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dba2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dba2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dba30: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBA30u;
    {
        const bool branch_taken_0x1dba30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dba30) {
            ctx->pc = 0x1DBA44u;
            goto label_1dba44;
        }
    }
    ctx->pc = 0x1DBA38u;
    // 0x1dba38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dba38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DBA3Cu;
    {
        const bool branch_taken_0x1dba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dba3c) {
            ctx->pc = 0x1DBA90u;
            goto label_1dba90;
        }
    }
    ctx->pc = 0x1DBA44u;
label_1dba44:
    // 0x1dba44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dba48: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1dba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dba4c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dba50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dba50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dba54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBA54u;
    {
        const bool branch_taken_0x1dba54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dba54) {
            ctx->pc = 0x1DBA68u;
            goto label_1dba68;
        }
    }
    ctx->pc = 0x1DBA5Cu;
    // 0x1dba5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dba60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DBA60u;
    {
        const bool branch_taken_0x1dba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dba60) {
            ctx->pc = 0x1DBA90u;
            goto label_1dba90;
        }
    }
    ctx->pc = 0x1DBA68u;
label_1dba68:
    // 0x1dba68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dba6c: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x1dba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dba70: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1dba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dba74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dba74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dba78: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBA78u;
    {
        const bool branch_taken_0x1dba78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dba78) {
            ctx->pc = 0x1DBA8Cu;
            goto label_1dba8c;
        }
    }
    ctx->pc = 0x1DBA80u;
    // 0x1dba80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dba84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DBA84u;
    {
        const bool branch_taken_0x1dba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dba84) {
            ctx->pc = 0x1DBA90u;
            goto label_1dba90;
        }
    }
    ctx->pc = 0x1DBA8Cu;
label_1dba8c:
    // 0x1dba8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dba90:
    // 0x1dba90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dba94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dba98: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBAA0u;
}
