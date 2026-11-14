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

// Function: sub_0017FB40
// Address: 0x17fb40 - 0x17fda0
void sub_0017FB40_0x17fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FB40_0x17fb40");
#endif

    switch (ctx->pc) {
        case 0x17fbbcu: goto label_17fbbc;
        case 0x17fbd4u: goto label_17fbd4;
        case 0x17fbecu: goto label_17fbec;
        case 0x17fc38u: goto label_17fc38;
        case 0x17fc4cu: goto label_17fc4c;
        case 0x17fc6cu: goto label_17fc6c;
        case 0x17fc9cu: goto label_17fc9c;
        case 0x17fcbcu: goto label_17fcbc;
        case 0x17fcf8u: goto label_17fcf8;
        case 0x17fd10u: goto label_17fd10;
        case 0x17fd48u: goto label_17fd48;
        default: break;
    }

    ctx->pc = 0x17fb40u;

    // 0x17fb40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17fb44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17fb48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fb4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fb50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fb54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fb58: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x17fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x17fb5c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x17fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x17fb60: 0xa3a0006f  sb          $zero, 0x6F($sp)
    ctx->pc = 0x17fb60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fb64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb68: 0x0  nop
    ctx->pc = 0x17fb68u;
    // NOP
    // 0x17fb6c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x17fb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17fb70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fb70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb74: 0x0  nop
    ctx->pc = 0x17fb74u;
    // NOP
    // 0x17fb78: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x17fb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x17fb7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17fb80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FB80u;
    {
        const bool branch_taken_0x17fb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fb80) {
            ctx->pc = 0x17FB94u;
            goto label_17fb94;
        }
    }
    ctx->pc = 0x17FB88u;
    // 0x17fb88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb8c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x17FB8Cu;
    {
        const bool branch_taken_0x17fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fb8c) {
            ctx->pc = 0x17FD74u;
            goto label_17fd74;
        }
    }
    ctx->pc = 0x17FB94u;
label_17fb94:
    // 0x17fb94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fb98: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x17fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x17fb9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17fba0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fba4: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x17fba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17fba8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fbac: 0x8c520098  lw          $s2, 0x98($v0)
    ctx->pc = 0x17fbacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x17fbb0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x17fbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbb4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x17FBB4u;
    {
        const bool branch_taken_0x17fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fbb4) {
            ctx->pc = 0x17FD64u;
            goto label_17fd64;
        }
    }
    ctx->pc = 0x17FBBCu;
label_17fbbc:
    // 0x17fbbc: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x17fbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    // 0x17fbc0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fbc4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fbc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbcc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FBCCu;
    SET_GPR_U32(ctx, 31, 0x17FBD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FBCCu, 0x17FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBD4u;
label_17fbd4:
    // 0x17fbd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fbd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fbdc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17fbe0: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x17fbe4: 0xc08c688  jal         func_231A20
    ctx->pc = 0x17FBE4u;
    SET_GPR_U32(ctx, 31, 0x17FBECu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x17FBE4u, 0x17FBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBECu;
label_17fbec:
    // 0x17fbec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17fbf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17fbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fbf4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fbf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17fbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17fbfc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17fbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17fc00: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17fc04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17fc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fc08: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17fc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fc0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17fc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17fc10: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17fc14: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x17fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
    // 0x17fc18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fc1c: 0x0  nop
    ctx->pc = 0x17fc1cu;
    // NOP
    // 0x17fc20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x17fc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17fc24: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fc28: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fc2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FC30u;
    SET_GPR_U32(ctx, 31, 0x17FC38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FC30u, 0x17FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC38u;
label_17fc38:
    // 0x17fc38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fc3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fc40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17fc44: 0xc08c794  jal         func_231E50
    ctx->pc = 0x17FC44u;
    SET_GPR_U32(ctx, 31, 0x17FC4Cu);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x17FC44u, 0x17FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC4Cu;
label_17fc4c:
    // 0x17fc4c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fc50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17fc50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fc54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x17fc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17fc58: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fc5c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FC64u;
    SET_GPR_U32(ctx, 31, 0x17FC6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FC64u, 0x17FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC6Cu;
label_17fc6c:
    // 0x17fc6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fc70: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fc74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17fc78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17fc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17fc7c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17fc80: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17fc84: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x17fc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x17fc88: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x17fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fc8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fc8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc94: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17FC94u;
    SET_GPR_U32(ctx, 31, 0x17FC9Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17FC94u, 0x17FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC9Cu;
label_17fc9c:
    // 0x17fc9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fca0: 0x0  nop
    ctx->pc = 0x17fca0u;
    // NOP
    // 0x17fca4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x17fca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17fca8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fcac: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fcb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FCB4u;
    SET_GPR_U32(ctx, 31, 0x17FCBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FCB4u, 0x17FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCBCu;
label_17fcbc:
    // 0x17fcbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fcc0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fcc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fcc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17fcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fccc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x17fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fcd0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x17fcd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fcd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fcd8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17fcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17fcdc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17fce0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17fce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17fce4: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x17fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17fce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fcecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcf0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17FCF0u;
    SET_GPR_U32(ctx, 31, 0x17FCF8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17FCF0u, 0x17FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCF8u;
label_17fcf8:
    // 0x17fcf8: 0xa3a0006f  sb          $zero, 0x6F($sp)
    ctx->pc = 0x17fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x17fcfc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x17fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fd00: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17FD08u;
    SET_GPR_U32(ctx, 31, 0x17FD10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17FD08u, 0x17FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD10u;
label_17fd10:
    // 0x17fd10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fd14: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fd18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17fd1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17fd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17fd20: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x17fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd24: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x17fd24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fd28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17fd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17fd2c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x17fd30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17fd34: 0x27a7006f  addiu       $a3, $sp, 0x6F
    ctx->pc = 0x17fd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
    // 0x17fd38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17fd38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fd3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fd40: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17FD40u;
    SET_GPR_U32(ctx, 31, 0x17FD48u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17FD40u, 0x17FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD48u;
label_17fd48:
    // 0x17fd48: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x17fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17fd4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fd54: 0x0  nop
    ctx->pc = 0x17fd54u;
    // NOP
    // 0x17fd58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17fd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17fd5c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x17fd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x17fd60: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17fd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17fd64:
    // 0x17fd64: 0x232082a  slt         $at, $s1, $s2
    ctx->pc = 0x17fd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17fd68: 0x1020ff94  beqz        $at, . + 4 + (-0x6C << 2)
    ctx->pc = 0x17FD68u;
    {
        const bool branch_taken_0x17fd68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd68) {
            ctx->pc = 0x17FBBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fbbc;
        }
    }
    ctx->pc = 0x17FD70u;
    // 0x17fd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fd74:
    // 0x17fd74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17fd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fd78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fd7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fd80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fd84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fd88: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x17fd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FD94u;
    // 0x17fd94: 0x0  nop
    ctx->pc = 0x17fd94u;
    // NOP
    // 0x17fd98: 0x0  nop
    ctx->pc = 0x17fd98u;
    // NOP
    // 0x17fd9c: 0x0  nop
    ctx->pc = 0x17fd9cu;
    // NOP
    ctx->pc = 0x17fda0u;
}
