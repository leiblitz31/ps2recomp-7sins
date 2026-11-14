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

// Function: sub_001E6350
// Address: 0x1e6350 - 0x1e64d0
void sub_001E6350_0x1e6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6350_0x1e6350");
#endif

    switch (ctx->pc) {
        case 0x1e63ccu: goto label_1e63cc;
        default: break;
    }

    ctx->pc = 0x1e6350u;

    // 0x1e6350: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e6354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e635c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e635cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e6360: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e6360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e6364: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e6364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e6368: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x1e6368u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e636c: 0xe7ad0060  swc1        $f13, 0x60($sp)
    ctx->pc = 0x1e636cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e6370: 0xe7ae0070  swc1        $f14, 0x70($sp)
    ctx->pc = 0x1e6370u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e6374: 0xe7af0080  swc1        $f15, 0x80($sp)
    ctx->pc = 0x1e6374u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e6378: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e6378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e637c: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1e637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6380: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e6380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6384: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e6388: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e6388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e638c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1e638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6390: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1e6390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1e6394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6398: 0x0  nop
    ctx->pc = 0x1e6398u;
    // NOP
    // 0x1e639c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e639cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e63a0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e63a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e63a4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1e63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e63a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1e63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1e63ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e63acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e63b0: 0x0  nop
    ctx->pc = 0x1e63b0u;
    // NOP
    // 0x1e63b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e63b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e63b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e63b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e63bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e63c0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e63c4: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E63C4u;
    SET_GPR_U32(ctx, 31, 0x1E63CCu);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E63C4u, 0x1E63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63CCu;
label_1e63cc:
    // 0x1e63cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e63d0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e63d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e63d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e63d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e63dc: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e63dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e63e0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1e63e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e63e4: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e63e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e63e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e63ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e63f0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1e63f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e63f4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e63f8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e63fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6400: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6404: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e6404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e6408: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1e6408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e640c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6410: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6414: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e641c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1e641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e6420: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1e6420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6424: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1e6424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e642c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1e642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6430: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6434: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e643c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e643cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e6440: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1e6440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6444: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e644c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x1e644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e6450: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6454: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e645c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1e645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e6460: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1e6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6464: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1e6464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e646c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x1e646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1e6470: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6474: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e647c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e647cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e6480: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1e6480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6484: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6488: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e648c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1e648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1e6490: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e6490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e6494: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e649c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1e649cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e64a0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e64a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e64a4: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1e64a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1e64a8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e64a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e64ac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e64acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e64b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e64b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e64b4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e64b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e64b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e64b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e64bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e64bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e64c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e64c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E64C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E64C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E64CCu;
    // 0x1e64cc: 0x0  nop
    ctx->pc = 0x1e64ccu;
    // NOP
    ctx->pc = 0x1e64d0u;
}
