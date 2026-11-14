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

// Function: sub_003AD738
// Address: 0x3ad738 - 0x3add08
void sub_003AD738_0x3ad738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD738_0x3ad738");
#endif

    switch (ctx->pc) {
        case 0x3ad7d8u: goto label_3ad7d8;
        case 0x3ad7e0u: goto label_3ad7e0;
        case 0x3ad820u: goto label_3ad820;
        case 0x3ad850u: goto label_3ad850;
        case 0x3ad88cu: goto label_3ad88c;
        case 0x3ad8d8u: goto label_3ad8d8;
        case 0x3ad968u: goto label_3ad968;
        case 0x3ad984u: goto label_3ad984;
        case 0x3ad9a8u: goto label_3ad9a8;
        case 0x3ad9bcu: goto label_3ad9bc;
        case 0x3ada54u: goto label_3ada54;
        case 0x3adad0u: goto label_3adad0;
        case 0x3adad8u: goto label_3adad8;
        case 0x3adae8u: goto label_3adae8;
        case 0x3adaf8u: goto label_3adaf8;
        case 0x3adb08u: goto label_3adb08;
        case 0x3adb18u: goto label_3adb18;
        case 0x3adb20u: goto label_3adb20;
        case 0x3adbc4u: goto label_3adbc4;
        case 0x3adbd8u: goto label_3adbd8;
        case 0x3adc00u: goto label_3adc00;
        default: break;
    }

    ctx->pc = 0x3ad738u;

    // 0x3ad738: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3ad738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3ad73c: 0xe7bb00e8  swc1        $f27, 0xE8($sp)
    ctx->pc = 0x3ad73cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x3ad740: 0xe7ba00e0  swc1        $f26, 0xE0($sp)
    ctx->pc = 0x3ad740u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3ad744: 0x46007ec6  mov.s       $f27, $f15
    ctx->pc = 0x3ad744u;
    ctx->f[27] = FPU_MOV_S(ctx->f[15]);
    // 0x3ad748: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x3ad748u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3ad74c: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x3ad74cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x3ad750: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x3ad750u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3ad754: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x3ad754u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x3ad758: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3ad758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3ad75c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x3ad75cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x3ad760: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3ad760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3ad764: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3ad764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3ad768: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ad768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3ad76c: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x3ad76cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3ad770: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x3ad770u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3ad774: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x3ad774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3ad778: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3ad778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3ad77c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3ad77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x3ad780: 0x2491d3d0  addiu       $s1, $a0, -0x2C30
    ctx->pc = 0x3ad780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955984));
    // 0x3ad784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ad784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ad788: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3ad788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3ad78c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3ad78cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61D3DCu));
    // 0x3ad790: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3ad790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3ad794: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3ad794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3ad798: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3ad798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3ad79c: 0xe497d3d0  swc1        $f23, -0x2C30($a0)
    ctx->pc = 0x3ad79cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3D0u, _value); } while (0); }
    // 0x3ad7a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad7a4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3ad7a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61D3DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3DCu, _value); } while (0);
    // 0x3ad7a8: 0xe6370028  swc1        $f23, 0x28($s1)
    ctx->pc = 0x3ad7a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3F8u, _value); } while (0); }
    // 0x3ad7ac: 0xe6370014  swc1        $f23, 0x14($s1)
    ctx->pc = 0x3ad7acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3E4u, _value); } while (0); }
    // 0x3ad7b0: 0xe6360010  swc1        $f22, 0x10($s1)
    ctx->pc = 0x3ad7b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3E0u, _value); } while (0); }
    // 0x3ad7b4: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x3ad7b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3D8u, _value); } while (0); }
    // 0x3ad7b8: 0xe6360004  swc1        $f22, 0x4($s1)
    ctx->pc = 0x3ad7b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3D4u, _value); } while (0); }
    // 0x3ad7bc: 0xe6360024  swc1        $f22, 0x24($s1)
    ctx->pc = 0x3ad7bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3F4u, _value); } while (0); }
    // 0x3ad7c0: 0xe6360020  swc1        $f22, 0x20($s1)
    ctx->pc = 0x3ad7c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3F0u, _value); } while (0); }
    // 0x3ad7c4: 0xe6360018  swc1        $f22, 0x18($s1)
    ctx->pc = 0x3ad7c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D3E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D3E8u, _value); } while (0); }
    // 0x3ad7c8: 0xe6360038  swc1        $f22, 0x38($s1)
    ctx->pc = 0x3ad7c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D408u, _value); } while (0); }
    // 0x3ad7cc: 0xe6360034  swc1        $f22, 0x34($s1)
    ctx->pc = 0x3ad7ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D404u, _value); } while (0); }
    // 0x3ad7d0: 0xc0eb7e6  jal         func_3ADF98
    ctx->pc = 0x3AD7D0u;
    SET_GPR_U32(ctx, 31, 0x3AD7D8u);
    ctx->pc = 0x3AD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7D0u;
    // 0x3ad7d4: 0xe6360030  swc1        $f22, 0x30($s1) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADF98u, 0x3AD7D0u, 0x3AD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7D8u;
label_3ad7d8:
    // 0x3ad7d8: 0xc0eb5b0  jal         func_3AD6C0
    ctx->pc = 0x3AD7D8u;
    SET_GPR_U32(ctx, 31, 0x3AD7E0u);
    ctx->pc = 0x3AD7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD7D8u;
    // 0x3ad7dc: 0x2632fab0  addiu       $s2, $s1, -0x550 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD6C0u, 0x3AD7D8u, 0x3AD7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD7E0u;
label_3ad7e0:
    // 0x3ad7e0: 0x8e430724  lw          $v1, 0x724($s2)
    ctx->pc = 0x3ad7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1828)));
    // 0x3ad7e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ad7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ad7e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3ad7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3ad7ec: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AD7ECu;
    {
        const bool branch_taken_0x3ad7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7ECu;
        // 0x3ad7f0: 0x4600bd06  mov.s       $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7ec) {
            ctx->pc = 0x3AD7F8u;
            goto label_3ad7f8;
        }
    }
    ctx->pc = 0x3AD7F4u;
    // 0x3ad7f4: 0xc65406f8  lwc1        $f20, 0x6F8($s2)
    ctx->pc = 0x3ad7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ad7f8:
    // 0x3ad7f8: 0x6a42061b  ldl         $v0, 0x61B($s2)
    ctx->pc = 0x3ad7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ad7fc: 0x6e420614  ldr         $v0, 0x614($s2)
    ctx->pc = 0x3ad7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ad800: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x3ad800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ad804: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x3ad804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ad808: 0x6a420623  ldl         $v0, 0x623($s2)
    ctx->pc = 0x3ad808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1571); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ad80c: 0x6e42061c  ldr         $v0, 0x61C($s2)
    ctx->pc = 0x3ad80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 1564); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ad810: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x3ad810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ad814: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x3ad814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ad818: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3AD818u;
    SET_GPR_U32(ctx, 31, 0x3AD820u);
    ctx->pc = 0x3AD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD818u;
    // 0x3ad81c: 0x26300120  addiu       $s0, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3AD818u, 0x3AD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD820u;
label_3ad820:
    // 0x3ad820: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3ad820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ad824: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x3ad824u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x3ad828: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3ad828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad82c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ad82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ad830: 0xe7b60044  swc1        $f22, 0x44($sp)
    ctx->pc = 0x3ad830u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3ad834: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ad834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad838: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ad838u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ad83c: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x3ad83cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3ad840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ad840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad844: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ad844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ad848: 0xc104d84  jal         func_413610
    ctx->pc = 0x3AD848u;
    SET_GPR_U32(ctx, 31, 0x3AD850u);
    ctx->pc = 0x3AD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD848u;
    // 0x3ad84c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3AD848u, 0x3AD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD850u;
label_3ad850:
    // 0x3ad850: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3ad850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ad854: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ad854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ad858: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x3ad858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ad85c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ad85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad860: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3ad860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ad864: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ad864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad868: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x3ad868u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x3ad86c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3ad86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad870: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3ad870u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ad874: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ad874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ad878: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x3ad878u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3ad87c: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x3ad87cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3ad880: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3ad880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3ad884: 0xc104d84  jal         func_413610
    ctx->pc = 0x3AD884u;
    SET_GPR_U32(ctx, 31, 0x3AD88Cu);
    ctx->pc = 0x3AD888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD884u;
    // 0x3ad888: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3AD884u, 0x3AD88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD88Cu;
label_3ad88c:
    // 0x3ad88c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x3ad88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ad890: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ad890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ad894: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ad894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3ad898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ad898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ad89c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ad89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8a0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3ad8a0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3ad8a4: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x3ad8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ad8a8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3ad8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3ad8ac: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3ad8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ad8b0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x3ad8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ad8b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ad8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8b8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3ad8b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ad8bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3ad8bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ad8c0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3ad8c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3ad8c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ad8c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ad8c8: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x3ad8c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3ad8cc: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3ad8ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3ad8d0: 0xc104d64  jal         func_413590
    ctx->pc = 0x3AD8D0u;
    SET_GPR_U32(ctx, 31, 0x3AD8D8u);
    ctx->pc = 0x3AD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD8D0u;
    // 0x3ad8d4: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x3AD8D0u, 0x3AD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD8D8u;
label_3ad8d8:
    // 0x3ad8d8: 0xc640061c  lwc1        $f0, 0x61C($s2)
    ctx->pc = 0x3ad8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad8dc: 0xc6420620  lwc1        $f2, 0x620($s2)
    ctx->pc = 0x3ad8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ad8e0: 0x461a0003  div.s       $f0, $f0, $f26
    ctx->pc = 0x3ad8e0u;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[26]); }
    // 0x3ad8e4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3ad8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ad8e8: 0x461b1083  div.s       $f2, $f2, $f27
    ctx->pc = 0x3ad8e8u;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[27]); }
    // 0x3ad8ec: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x3ad8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ad8f0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3ad8f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3ad8f4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x3ad8f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3ad8f8: 0xc7b50000  lwc1        $f21, 0x0($sp)
    ctx->pc = 0x3ad8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ad8fc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3ad8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ad900: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x3ad900u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3ad904: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ad904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ad908: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x3ad908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ad90c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3ad90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ad910: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3ad910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ad914: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3ad914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ad918: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x3ad918u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x3ad91c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ad91cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ad920: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3ad920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ad924: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3ad924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3ad928: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x3ad928u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x3ad92c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3ad92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3ad930: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x3ad930u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x3ad934: 0x46150544  c1          0x150544
    ctx->pc = 0x3ad934u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x3ad938: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x3ad938u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3ad93c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3ad93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3ad940: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3ad940u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3ad944: 0x46140504  c1          0x140504
    ctx->pc = 0x3ad944u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x3ad948: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3ad948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3ad94c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ad94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad950: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3ad950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ad954: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x3ad954u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3ad958: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x3ad958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3ad95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ad95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad960: 0xc103d16  jal         func_40F458
    ctx->pc = 0x3AD960u;
    SET_GPR_U32(ctx, 31, 0x3AD968u);
    ctx->pc = 0x3AD964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD960u;
    // 0x3ad964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x3AD960u, 0x3AD968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD968u;
label_3ad968:
    // 0x3ad968: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3ad968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3ad96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ad96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad970: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x3ad970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3ad974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ad974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad978: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x3ad978u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3ad97c: 0xc103c86  jal         func_40F218
    ctx->pc = 0x3AD97Cu;
    SET_GPR_U32(ctx, 31, 0x3AD984u);
    ctx->pc = 0x3AD980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD97Cu;
    // 0x3ad980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x3AD97Cu, 0x3AD984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD984u;
label_3ad984:
    // 0x3ad984: 0x4600c047  neg.s       $f1, $f24
    ctx->pc = 0x3ad984u;
    ctx->f[1] = FPU_NEG_S(ctx->f[24]);
    // 0x3ad988: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x3ad988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3ad98c: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x3ad98cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
    // 0x3ad990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ad990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ad994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ad998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad99c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3ad99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3ad9a0: 0xc103d16  jal         func_40F458
    ctx->pc = 0x3AD9A0u;
    SET_GPR_U32(ctx, 31, 0x3AD9A8u);
    ctx->pc = 0x3AD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD9A0u;
    // 0x3ad9a4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x3AD9A0u, 0x3AD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD9A8u;
label_3ad9a8:
    // 0x3ad9a8: 0xe6580710  swc1        $f24, 0x710($s2)
    ctx->pc = 0x3ad9a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1808), bits); }
    // 0x3ad9ac: 0xe6590714  swc1        $f25, 0x714($s2)
    ctx->pc = 0x3ad9acu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1812), bits); }
    // 0x3ad9b0: 0xe65a0718  swc1        $f26, 0x718($s2)
    ctx->pc = 0x3ad9b0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1816), bits); }
    // 0x3ad9b4: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3AD9B4u;
    SET_GPR_U32(ctx, 31, 0x3AD9BCu);
    ctx->pc = 0x3AD9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD9B4u;
    // 0x3ad9b8: 0xe65b071c  swc1        $f27, 0x71C($s2) (Delay Slot)
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1820), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3AD9B4u, 0x3AD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD9BCu;
label_3ad9bc:
    // 0x3ad9bc: 0xae4006f0  sw          $zero, 0x6F0($s2)
    ctx->pc = 0x3ad9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1776), GPR_U32(ctx, 0));
    // 0x3ad9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ad9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad9c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3ad9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ad9c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3ad9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ad9cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3ad9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ad9d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ad9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ad9d4: 0xc7bb00e8  lwc1        $f27, 0xE8($sp)
    ctx->pc = 0x3ad9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3ad9d8: 0xc7ba00e0  lwc1        $f26, 0xE0($sp)
    ctx->pc = 0x3ad9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3ad9dc: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x3ad9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3ad9e0: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x3ad9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3ad9e4: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x3ad9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3ad9e8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x3ad9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3ad9ec: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3ad9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ad9f0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3ad9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ad9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9F4u;
        // 0x3ad9f8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD9FCu;
    // 0x3ad9fc: 0x0  nop
    ctx->pc = 0x3ad9fcu;
    // NOP
    // 0x3ada00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ada00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ada04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ada04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ada08: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ada08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3ada0c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ada0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3ada10: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3ada10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ada14: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ada14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3ada18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ada18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada1c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ada1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3ada20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ada20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ada24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ada24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ada28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ada28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3ada2c: 0x8e030724  lw          $v1, 0x724($s0)
    ctx->pc = 0x3ada2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61D5A4u));
    // 0x3ada30: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3ada30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3ada34: 0x54440001  bnel        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADA34u;
    {
        const bool branch_taken_0x3ada34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ada34) {
            ctx->pc = 0x3ADA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADA34u;
            // 0x3ada38: 0xc61406f8  lwc1        $f20, 0x6F8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADA3Cu;
            goto label_3ada3c;
        }
    }
    ctx->pc = 0x3ADA3Cu;
label_3ada3c:
    // 0x3ada3c: 0x6a02061b  ldl         $v0, 0x61B($s0)
    ctx->pc = 0x3ada3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ada40: 0x6e020614  ldr         $v0, 0x614($s0)
    ctx->pc = 0x3ada40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 1556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ada44: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x3ada44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ada48: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x3ada48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ada4c: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3ADA4Cu;
    SET_GPR_U32(ctx, 31, 0x3ADA54u);
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3ADA4Cu, 0x3ADA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA54u;
label_3ada54:
    // 0x3ada54: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3ada54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ada58: 0x26070670  addiu       $a3, $s0, 0x670
    ctx->pc = 0x3ada58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x3ada5c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x3ada5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ada60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ada60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ada64: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x3ada64u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x3ada68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ada68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3ada6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3ada6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ada70: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x3ada70u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x3ada74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ada74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada78: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3ada78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3ada7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ada7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ada80: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x3ada80u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x3ada84: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3ada84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3ada88: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3ada88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3ada8c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3ada8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3ada90: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3ada90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3ada94: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3ada94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3ada98: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3ada98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3ada9c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3ada9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3adaa0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3adaa0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3adaa4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3adaa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3adaa8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3adaa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3adaac: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3adaacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3adab0: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x3adab0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3adab4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x3adab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3adab8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3adab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3adabc: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x3adabcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3adac0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3adac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3adac4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3adac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3adac8: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x3ADAC8u;
    SET_GPR_U32(ctx, 31, 0x3ADAD0u);
    ctx->pc = 0x3ADACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAC8u;
    // 0x3adacc: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x3ADAC8u, 0x3ADAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAD0u;
label_3adad0:
    // 0x3adad0: 0xc0ec6c4  jal         func_3B1B10
    ctx->pc = 0x3ADAD0u;
    SET_GPR_U32(ctx, 31, 0x3ADAD8u);
    ctx->pc = 0x3ADAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAD0u;
    // 0x3adad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B10u, 0x3ADAD0u, 0x3ADAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAD8u;
label_3adad8:
    // 0x3adad8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x3adad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3adadc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adae0: 0xc0ec6d6  jal         func_3B1B58
    ctx->pc = 0x3ADAE0u;
    SET_GPR_U32(ctx, 31, 0x3ADAE8u);
    ctx->pc = 0x3ADAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAE0u;
    // 0x3adae4: 0xc7ad0034  lwc1        $f13, 0x34($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B58u, 0x3ADAE0u, 0x3ADAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAE8u;
label_3adae8:
    // 0x3adae8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x3adae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3adaec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adaf0: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3ADAF0u;
    SET_GPR_U32(ctx, 31, 0x3ADAF8u);
    ctx->pc = 0x3ADAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADAF0u;
    // 0x3adaf4: 0xc7ad0040  lwc1        $f13, 0x40($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3ADAF0u, 0x3ADAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADAF8u;
label_3adaf8:
    // 0x3adaf8: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x3adaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3adafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb00: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3ADB00u;
    SET_GPR_U32(ctx, 31, 0x3ADB08u);
    ctx->pc = 0x3ADB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB00u;
    // 0x3adb04: 0xc7ad004c  lwc1        $f13, 0x4C($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3ADB00u, 0x3ADB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB08u;
label_3adb08:
    // 0x3adb08: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x3adb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3adb0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3adb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb10: 0xc0ebb40  jal         func_3AED00
    ctx->pc = 0x3ADB10u;
    SET_GPR_U32(ctx, 31, 0x3ADB18u);
    ctx->pc = 0x3ADB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB10u;
    // 0x3adb14: 0xc7ad0058  lwc1        $f13, 0x58($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AED00u, 0x3ADB10u, 0x3ADB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB18u;
label_3adb18:
    // 0x3adb18: 0xc0ebc42  jal         func_3AF108
    ctx->pc = 0x3ADB18u;
    SET_GPR_U32(ctx, 31, 0x3ADB20u);
    ctx->pc = 0x3ADB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB18u;
    // 0x3adb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF108u, 0x3ADB18u, 0x3ADB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB20u;
label_3adb20:
    // 0x3adb20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3adb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3adb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3adb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adb28: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3adb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3adb2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3adb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3adb30: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3adb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3adb34: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB34u;
        // 0x3adb38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADB3Cu;
    // 0x3adb3c: 0x0  nop
    ctx->pc = 0x3adb3cu;
    // NOP
    // 0x3adb40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3adb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3adb44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3adb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3adb48: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3adb48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3adb4c: 0x2445ce80  addiu       $a1, $v0, -0x3180
    ctx->pc = 0x3adb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3adb50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3adb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3adb54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3adb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3adb58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3adb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3adb5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3adb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3adb60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3adb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3adb64: 0x8ca40724  lw          $a0, 0x724($a1)
    ctx->pc = 0x3adb64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61D5A4u));
    // 0x3adb68: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3adb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3adb6c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADB6Cu;
    {
        const bool branch_taken_0x3adb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3adb6c) {
            ctx->pc = 0x3ADB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADB6Cu;
            // 0x3adb70: 0xc4b406f8  lwc1        $f20, 0x6F8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADB74u;
            goto label_3adb74;
        }
    }
    ctx->pc = 0x3ADB74u;
label_3adb74:
    // 0x3adb74: 0x460e6000  add.s       $f0, $f12, $f14
    ctx->pc = 0x3adb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x3adb78: 0x68a2061b  ldl         $v0, 0x61B($a1)
    ctx->pc = 0x3adb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3adb7c: 0x6ca20614  ldr         $v0, 0x614($a1)
    ctx->pc = 0x3adb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3adb80: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x3adb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3adb84: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x3adb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3adb88: 0x460f6840  add.s       $f1, $f13, $f15
    ctx->pc = 0x3adb88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x3adb8c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3adb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3adb90: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x3adb90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3adb94: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3adb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3adb98: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3adb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3adb9c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3adb9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3adba0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3adba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3adba4: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3adba4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3adba8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3adba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3adbac: 0xe7ad0010  swc1        $f13, 0x10($sp)
    ctx->pc = 0x3adbacu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3adbb0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3adbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3adbb4: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3adbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3adbb8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3adbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3adbbc: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3ADBBCu;
    SET_GPR_U32(ctx, 31, 0x3ADBC4u);
    ctx->pc = 0x3ADBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBBCu;
    // 0x3adbc0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3ADBBCu, 0x3ADBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBC4u;
label_3adbc4:
    // 0x3adbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3adbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3adbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3adbd0: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x3ADBD0u;
    SET_GPR_U32(ctx, 31, 0x3ADBD8u);
    ctx->pc = 0x3ADBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBD0u;
    // 0x3adbd4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x3ADBD0u, 0x3ADBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBD8u;
label_3adbd8:
    // 0x3adbd8: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x3adbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3adbdc: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x3adbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x3adbe0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3adbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3adbe4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3adbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3adbe8: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x3adbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x3adbec: 0x46143002  mul.s       $f0, $f6, $f20
    ctx->pc = 0x3adbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x3adbf0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3adbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3adbf4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3adbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbf8: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x3adbf8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3adbfc: 0x0  nop
    ctx->pc = 0x3adbfcu;
    // NOP
label_3adc00:
    // 0x3adc00: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3adc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adc04: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x3adc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc08: 0x0  nop
    ctx->pc = 0x3adc08u;
    // NOP
    // 0x3adc0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3ADC0Cu;
    {
        const bool branch_taken_0x3adc0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC0Cu;
        // 0x3adc10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc0c) {
            ctx->pc = 0x3ADC18u;
            goto label_3adc18;
        }
    }
    ctx->pc = 0x3ADC14u;
    // 0x3adc14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3adc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3adc18:
    // 0x3adc18: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x3adc18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x3adc1c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3adc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3adc20: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x3adc20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3adc24: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x3adc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc28: 0x0  nop
    ctx->pc = 0x3adc28u;
    // NOP
    // 0x3adc2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADC2Cu;
    {
        const bool branch_taken_0x3adc2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adc2c) {
            ctx->pc = 0x3ADC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADC2Cu;
            // 0x3adc30: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADC34u;
            goto label_3adc34;
        }
    }
    ctx->pc = 0x3ADC34u;
label_3adc34:
    // 0x3adc34: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3adc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3adc38: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3adc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adc3c: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x3adc3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3adc40: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3adc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3adc44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3adc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc48: 0x0  nop
    ctx->pc = 0x3adc48u;
    // NOP
    // 0x3adc4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADC4Cu;
    {
        const bool branch_taken_0x3adc4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adc4c) {
            ctx->pc = 0x3ADC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADC4Cu;
            // 0x3adc50: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADC54u;
            goto label_3adc54;
        }
    }
    ctx->pc = 0x3ADC54u;
label_3adc54:
    // 0x3adc54: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3adc54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3adc58: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3adc58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3adc5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3adc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3adc60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3adc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc64: 0x0  nop
    ctx->pc = 0x3adc64u;
    // NOP
    // 0x3adc68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADC68u;
    {
        const bool branch_taken_0x3adc68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adc68) {
            ctx->pc = 0x3ADC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADC68u;
            // 0x3adc6c: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADC70u;
            goto label_3adc70;
        }
    }
    ctx->pc = 0x3ADC70u;
label_3adc70:
    // 0x3adc70: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3adc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3adc74: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3adc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3adc78: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3adc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc7c: 0x0  nop
    ctx->pc = 0x3adc7cu;
    // NOP
    // 0x3adc80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3ADC80u;
    {
        const bool branch_taken_0x3adc80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC80u;
        // 0x3adc84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc80) {
            ctx->pc = 0x3ADC8Cu;
            goto label_3adc8c;
        }
    }
    ctx->pc = 0x3ADC88u;
    // 0x3adc88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3adc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3adc8c:
    // 0x3adc8c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3adc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adc90: 0x0  nop
    ctx->pc = 0x3adc90u;
    // NOP
    // 0x3adc94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADC94u;
    {
        const bool branch_taken_0x3adc94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adc94) {
            ctx->pc = 0x3ADC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADC94u;
            // 0x3adc98: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADC9Cu;
            goto label_3adc9c;
        }
    }
    ctx->pc = 0x3ADC9Cu;
label_3adc9c:
    // 0x3adc9c: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x3adc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3adca0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3adca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adca4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3adca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3adca8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3adca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adcac: 0x0  nop
    ctx->pc = 0x3adcacu;
    // NOP
    // 0x3adcb0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADCB0u;
    {
        const bool branch_taken_0x3adcb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adcb0) {
            ctx->pc = 0x3ADCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADCB0u;
            // 0x3adcb4: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADCB8u;
            goto label_3adcb8;
        }
    }
    ctx->pc = 0x3ADCB8u;
label_3adcb8:
    // 0x3adcb8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3adcb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3adcbc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3adcbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3adcc0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3adcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3adcc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3adcc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adcc8: 0x0  nop
    ctx->pc = 0x3adcc8u;
    // NOP
    // 0x3adccc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADCCCu;
    {
        const bool branch_taken_0x3adccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adccc) {
            ctx->pc = 0x3ADCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADCCCu;
            // 0x3adcd0: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADCD4u;
            goto label_3adcd4;
        }
    }
    ctx->pc = 0x3ADCD4u;
label_3adcd4:
    // 0x3adcd4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3adcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3adcd8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3adcd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3adcdc: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x3adcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3adce0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3adce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3adce4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3ADCE4u;
    {
        const bool branch_taken_0x3adce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCE4u;
        // 0x3adce8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adce4) {
            ctx->pc = 0x3ADC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3adc00;
        }
    }
    ctx->pc = 0x3ADCECu;
    // 0x3adcec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3adcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3adcf0: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x3adcf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3adcf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3adcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3adcf8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3adcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3adcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCFCu;
        // 0x3add00: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADD04u;
    // 0x3add04: 0x0  nop
    ctx->pc = 0x3add04u;
    // NOP
    ctx->pc = 0x3add08u;
}
