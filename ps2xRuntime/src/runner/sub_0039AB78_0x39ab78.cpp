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

// Function: sub_0039AB78
// Address: 0x39ab78 - 0x39ad88
void sub_0039AB78_0x39ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AB78_0x39ab78");
#endif

    switch (ctx->pc) {
        case 0x39ab78u: goto label_39ab78;
        case 0x39ab7cu: goto label_39ab7c;
        case 0x39ab80u: goto label_39ab80;
        case 0x39ab84u: goto label_39ab84;
        case 0x39ab88u: goto label_39ab88;
        case 0x39ab8cu: goto label_39ab8c;
        case 0x39ab90u: goto label_39ab90;
        case 0x39ab94u: goto label_39ab94;
        case 0x39ab98u: goto label_39ab98;
        case 0x39ab9cu: goto label_39ab9c;
        case 0x39aba0u: goto label_39aba0;
        case 0x39aba4u: goto label_39aba4;
        case 0x39aba8u: goto label_39aba8;
        case 0x39abacu: goto label_39abac;
        case 0x39abb0u: goto label_39abb0;
        case 0x39abb4u: goto label_39abb4;
        case 0x39abb8u: goto label_39abb8;
        case 0x39abbcu: goto label_39abbc;
        case 0x39abc0u: goto label_39abc0;
        case 0x39abc4u: goto label_39abc4;
        case 0x39abc8u: goto label_39abc8;
        case 0x39abccu: goto label_39abcc;
        case 0x39abd0u: goto label_39abd0;
        case 0x39abd4u: goto label_39abd4;
        case 0x39abd8u: goto label_39abd8;
        case 0x39abdcu: goto label_39abdc;
        case 0x39abe0u: goto label_39abe0;
        case 0x39abe4u: goto label_39abe4;
        case 0x39abe8u: goto label_39abe8;
        case 0x39abecu: goto label_39abec;
        case 0x39abf0u: goto label_39abf0;
        case 0x39abf4u: goto label_39abf4;
        case 0x39abf8u: goto label_39abf8;
        case 0x39abfcu: goto label_39abfc;
        case 0x39ac00u: goto label_39ac00;
        case 0x39ac04u: goto label_39ac04;
        case 0x39ac08u: goto label_39ac08;
        case 0x39ac0cu: goto label_39ac0c;
        case 0x39ac10u: goto label_39ac10;
        case 0x39ac14u: goto label_39ac14;
        case 0x39ac18u: goto label_39ac18;
        case 0x39ac1cu: goto label_39ac1c;
        case 0x39ac20u: goto label_39ac20;
        case 0x39ac24u: goto label_39ac24;
        case 0x39ac28u: goto label_39ac28;
        case 0x39ac2cu: goto label_39ac2c;
        case 0x39ac30u: goto label_39ac30;
        case 0x39ac34u: goto label_39ac34;
        case 0x39ac38u: goto label_39ac38;
        case 0x39ac3cu: goto label_39ac3c;
        case 0x39ac40u: goto label_39ac40;
        case 0x39ac44u: goto label_39ac44;
        case 0x39ac48u: goto label_39ac48;
        case 0x39ac4cu: goto label_39ac4c;
        case 0x39ac50u: goto label_39ac50;
        case 0x39ac54u: goto label_39ac54;
        case 0x39ac58u: goto label_39ac58;
        case 0x39ac5cu: goto label_39ac5c;
        case 0x39ac60u: goto label_39ac60;
        case 0x39ac64u: goto label_39ac64;
        case 0x39ac68u: goto label_39ac68;
        case 0x39ac6cu: goto label_39ac6c;
        case 0x39ac70u: goto label_39ac70;
        case 0x39ac74u: goto label_39ac74;
        case 0x39ac78u: goto label_39ac78;
        case 0x39ac7cu: goto label_39ac7c;
        case 0x39ac80u: goto label_39ac80;
        case 0x39ac84u: goto label_39ac84;
        case 0x39ac88u: goto label_39ac88;
        case 0x39ac8cu: goto label_39ac8c;
        case 0x39ac90u: goto label_39ac90;
        case 0x39ac94u: goto label_39ac94;
        case 0x39ac98u: goto label_39ac98;
        case 0x39ac9cu: goto label_39ac9c;
        case 0x39aca0u: goto label_39aca0;
        case 0x39aca4u: goto label_39aca4;
        case 0x39aca8u: goto label_39aca8;
        case 0x39acacu: goto label_39acac;
        case 0x39acb0u: goto label_39acb0;
        case 0x39acb4u: goto label_39acb4;
        case 0x39acb8u: goto label_39acb8;
        case 0x39acbcu: goto label_39acbc;
        case 0x39acc0u: goto label_39acc0;
        case 0x39acc4u: goto label_39acc4;
        case 0x39acc8u: goto label_39acc8;
        case 0x39acccu: goto label_39accc;
        case 0x39acd0u: goto label_39acd0;
        case 0x39acd4u: goto label_39acd4;
        case 0x39acd8u: goto label_39acd8;
        case 0x39acdcu: goto label_39acdc;
        case 0x39ace0u: goto label_39ace0;
        case 0x39ace4u: goto label_39ace4;
        case 0x39ace8u: goto label_39ace8;
        case 0x39acecu: goto label_39acec;
        case 0x39acf0u: goto label_39acf0;
        case 0x39acf4u: goto label_39acf4;
        case 0x39acf8u: goto label_39acf8;
        case 0x39acfcu: goto label_39acfc;
        case 0x39ad00u: goto label_39ad00;
        case 0x39ad04u: goto label_39ad04;
        case 0x39ad08u: goto label_39ad08;
        case 0x39ad0cu: goto label_39ad0c;
        case 0x39ad10u: goto label_39ad10;
        case 0x39ad14u: goto label_39ad14;
        case 0x39ad18u: goto label_39ad18;
        case 0x39ad1cu: goto label_39ad1c;
        case 0x39ad20u: goto label_39ad20;
        case 0x39ad24u: goto label_39ad24;
        case 0x39ad28u: goto label_39ad28;
        case 0x39ad2cu: goto label_39ad2c;
        case 0x39ad30u: goto label_39ad30;
        case 0x39ad34u: goto label_39ad34;
        case 0x39ad38u: goto label_39ad38;
        case 0x39ad3cu: goto label_39ad3c;
        case 0x39ad40u: goto label_39ad40;
        case 0x39ad44u: goto label_39ad44;
        case 0x39ad48u: goto label_39ad48;
        case 0x39ad4cu: goto label_39ad4c;
        case 0x39ad50u: goto label_39ad50;
        case 0x39ad54u: goto label_39ad54;
        case 0x39ad58u: goto label_39ad58;
        case 0x39ad5cu: goto label_39ad5c;
        case 0x39ad60u: goto label_39ad60;
        case 0x39ad64u: goto label_39ad64;
        case 0x39ad68u: goto label_39ad68;
        case 0x39ad6cu: goto label_39ad6c;
        case 0x39ad70u: goto label_39ad70;
        case 0x39ad74u: goto label_39ad74;
        case 0x39ad78u: goto label_39ad78;
        case 0x39ad7cu: goto label_39ad7c;
        case 0x39ad80u: goto label_39ad80;
        case 0x39ad84u: goto label_39ad84;
        default: break;
    }

    ctx->pc = 0x39ab78u;

label_39ab78:
    // 0x39ab78: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x39ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_39ab7c:
    // 0x39ab7c: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x39ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_39ab80:
    // 0x39ab80: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x39ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_39ab84:
    // 0x39ab84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ab84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ab88:
    // 0x39ab88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39ab88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39ab8c:
    // 0x39ab8c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x39ab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_39ab90:
    // 0x39ab90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39ab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39ab94:
    // 0x39ab94: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x39ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_39ab98:
    // 0x39ab98: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x39ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_39ab9c:
    // 0x39ab9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39ab9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39aba0:
    // 0x39aba0: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x39aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_39aba4:
    // 0x39aba4: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x39aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_39aba8:
    // 0x39aba8: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x39aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_39abac:
    // 0x39abac: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x39abacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_39abb0:
    // 0x39abb0: 0xc0e2048  jal         func_388120
label_39abb4:
    if (ctx->pc == 0x39ABB4u) {
        ctx->pc = 0x39ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ABB0u;
        // 0x39abb4: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ABB8u;
        goto label_39abb8;
    }
    ctx->pc = 0x39ABB0u;
    SET_GPR_U32(ctx, 31, 0x39ABB8u);
    ctx->pc = 0x39ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39ABB0u;
    // 0x39abb4: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x39ABB0u, 0x39ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ABB8u;
label_39abb8:
    // 0x39abb8: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x39abb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_39abbc:
    // 0x39abbc: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x39abbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_39abc0:
    // 0x39abc0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x39abc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39abc4:
    // 0x39abc4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x39abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_39abc8:
    // 0x39abc8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x39abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_39abcc:
    // 0x39abcc: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x39abccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39abd0:
    // 0x39abd0: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x39abd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39abd4:
    // 0x39abd4: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x39abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_39abd8:
    // 0x39abd8: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x39abd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_39abdc:
    // 0x39abdc: 0x6ba70107  ldl         $a3, 0x107($sp)
    ctx->pc = 0x39abdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_39abe0:
    // 0x39abe0: 0x6fa70100  ldr         $a3, 0x100($sp)
    ctx->pc = 0x39abe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_39abe4:
    // 0x39abe4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x39abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_39abe8:
    // 0x39abe8: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x39abe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39abec:
    // 0x39abec: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x39abecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39abf0:
    // 0x39abf0: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x39abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_39abf4:
    // 0x39abf4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39abf8:
    // 0x39abf8: 0x2475e880  addiu       $s5, $v1, -0x1780
    ctx->pc = 0x39abf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39abfc:
    // 0x39abfc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x39abfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39ac00:
    // 0x39ac00: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x39ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39ac04:
    // 0x39ac04: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x39ac04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ac08:
    // 0x39ac08: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x39ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ac0c:
    // 0x39ac0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x39ac0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_39ac10:
    // 0x39ac10: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x39ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39ac14:
    // 0x39ac14: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x39ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39ac18:
    // 0x39ac18: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x39ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39ac1c:
    // 0x39ac1c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x39ac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_39ac20:
    // 0x39ac20: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x39ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39ac24:
    // 0x39ac24: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x39ac24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ac28:
    // 0x39ac28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39ac28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39ac2c:
    // 0x39ac2c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x39ac2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_39ac30:
    // 0x39ac30: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x39ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ac34:
    // 0x39ac34: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x39ac34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_39ac38:
    // 0x39ac38: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x39ac38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_39ac3c:
    // 0x39ac3c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x39ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ac40:
    // 0x39ac40: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x39ac40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_39ac44:
    // 0x39ac44: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x39ac44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_39ac48:
    // 0x39ac48: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x39ac48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ac4c:
    // 0x39ac4c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x39ac4cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_39ac50:
    // 0x39ac50: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x39ac50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_39ac54:
    // 0x39ac54: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x39ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ac58:
    // 0x39ac58: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x39ac58u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_39ac5c:
    // 0x39ac5c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x39ac5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_39ac60:
    // 0x39ac60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39ac64:
    // 0x39ac64: 0x0  nop
    ctx->pc = 0x39ac64u;
    // NOP
label_39ac68:
    // 0x39ac68: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
label_39ac6c:
    if (ctx->pc == 0x39AC6Cu) {
        ctx->pc = 0x39AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC68u;
        // 0x39ac6c: 0x2c31021  addu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC70u;
        goto label_39ac70;
    }
    ctx->pc = 0x39AC68u;
    {
        const bool branch_taken_0x39ac68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x39AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC68u;
        // 0x39ac6c: 0x2c31021  addu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ac68) {
            ctx->pc = 0x39ACDCu;
            goto label_39acdc;
        }
    }
    ctx->pc = 0x39AC70u;
label_39ac70:
    // 0x39ac70: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39ac74:
    // 0x39ac74: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x39ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_39ac78:
    // 0x39ac78: 0x8ea20118  lw          $v0, 0x118($s5)
    ctx->pc = 0x39ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_39ac7c:
    // 0x39ac7c: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x39ac7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_39ac80:
    // 0x39ac80: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x39ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_39ac84:
    // 0x39ac84: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x39ac84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_39ac88:
    // 0x39ac88: 0x40f809  jalr        $v0
label_39ac8c:
    if (ctx->pc == 0x39AC8Cu) {
        ctx->pc = 0x39AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC88u;
        // 0x39ac8c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AC90u;
        goto label_39ac90;
    }
    ctx->pc = 0x39AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39AC90u);
        ctx->pc = 0x39AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AC88u;
        // 0x39ac8c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AC88u, 0x39AC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AC90u;
label_39ac90:
    // 0x39ac90: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x39ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39ac94:
    // 0x39ac94: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x39ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_39ac98:
    // 0x39ac98: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x39ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_39ac9c:
    // 0x39ac9c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x39ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_39aca0:
    // 0x39aca0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_39aca4:
    // 0x39aca4: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x39aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_39aca8:
    // 0x39aca8: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x39aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_39acac:
    // 0x39acac: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x39acacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_39acb0:
    // 0x39acb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x39acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_39acb4:
    // 0x39acb4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x39acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_39acb8:
    // 0x39acb8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x39acb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39acbc:
    // 0x39acbc: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x39acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_39acc0:
    // 0x39acc0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39acc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_39acc4:
    // 0x39acc4: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x39acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
label_39acc8:
    // 0x39acc8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x39acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_39accc:
    // 0x39accc: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x39acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_39acd0:
    // 0x39acd0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x39acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_39acd4:
    // 0x39acd4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_39acd8:
    if (ctx->pc == 0x39ACD8u) {
        ctx->pc = 0x39ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACD4u;
        // 0x39acd8: 0xae450064  sw          $a1, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ACDCu;
        goto label_39acdc;
    }
    ctx->pc = 0x39ACD4u;
    {
        const bool branch_taken_0x39acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACD4u;
        // 0x39acd8: 0xae450064  sw          $a1, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39acd4) {
            ctx->pc = 0x39AD54u;
            goto label_39ad54;
        }
    }
    ctx->pc = 0x39ACDCu;
label_39acdc:
    // 0x39acdc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x39acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ace0:
    // 0x39ace0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ace4:
    // 0x39ace4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39ace4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ace8:
    // 0x39ace8: 0x0  nop
    ctx->pc = 0x39ace8u;
    // NOP
label_39acec:
    // 0x39acec: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_39acf0:
    if (ctx->pc == 0x39ACF0u) {
        ctx->pc = 0x39ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACECu;
        // 0x39acf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ACF4u;
        goto label_39acf4;
    }
    ctx->pc = 0x39ACECu;
    {
        const bool branch_taken_0x39acec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACECu;
        // 0x39acf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39acec) {
            ctx->pc = 0x39AD28u;
            goto label_39ad28;
        }
    }
    ctx->pc = 0x39ACF4u;
label_39acf4:
    // 0x39acf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39acf8:
    // 0x39acf8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x39acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39acfc:
    // 0x39acfc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x39acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_39ad00:
    // 0x39ad00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ad04:
    // 0x39ad04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39ad04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ad08:
    // 0x39ad08: 0x0  nop
    ctx->pc = 0x39ad08u;
    // NOP
label_39ad0c:
    // 0x39ad0c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_39ad10:
    if (ctx->pc == 0x39AD10u) {
        ctx->pc = 0x39AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD0Cu;
        // 0x39ad10: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AD14u;
        goto label_39ad14;
    }
    ctx->pc = 0x39AD0Cu;
    {
        const bool branch_taken_0x39ad0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD0Cu;
        // 0x39ad10: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad0c) {
            ctx->pc = 0x39AD54u;
            goto label_39ad54;
        }
    }
    ctx->pc = 0x39AD14u;
label_39ad14:
    // 0x39ad14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x39ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_39ad18:
    // 0x39ad18: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39ad18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_39ad1c:
    // 0x39ad1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39ad1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39ad20:
    // 0x39ad20: 0x1000000c  b           . + 4 + (0xC << 2)
label_39ad24:
    if (ctx->pc == 0x39AD24u) {
        ctx->pc = 0x39AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD20u;
        // 0x39ad24: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AD28u;
        goto label_39ad28;
    }
    ctx->pc = 0x39AD20u;
    {
        const bool branch_taken_0x39ad20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD20u;
        // 0x39ad24: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad20) {
            ctx->pc = 0x39AD54u;
            goto label_39ad54;
        }
    }
    ctx->pc = 0x39AD28u;
label_39ad28:
    // 0x39ad28: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x39ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_39ad2c:
    // 0x39ad2c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x39ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ad30:
    // 0x39ad30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ad34:
    // 0x39ad34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39ad34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ad38:
    // 0x39ad38: 0x0  nop
    ctx->pc = 0x39ad38u;
    // NOP
label_39ad3c:
    // 0x39ad3c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_39ad40:
    if (ctx->pc == 0x39AD40u) {
        ctx->pc = 0x39AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD3Cu;
        // 0x39ad40: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AD44u;
        goto label_39ad44;
    }
    ctx->pc = 0x39AD3Cu;
    {
        const bool branch_taken_0x39ad3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ad3c) {
            ctx->pc = 0x39AD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AD3Cu;
            // 0x39ad40: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AD4Cu;
            goto label_39ad4c;
        }
    }
    ctx->pc = 0x39AD44u;
label_39ad44:
    // 0x39ad44: 0x10000003  b           . + 4 + (0x3 << 2)
label_39ad48:
    if (ctx->pc == 0x39AD48u) {
        ctx->pc = 0x39AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD44u;
        // 0x39ad48: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AD4Cu;
        goto label_39ad4c;
    }
    ctx->pc = 0x39AD44u;
    {
        const bool branch_taken_0x39ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD44u;
        // 0x39ad48: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad44) {
            ctx->pc = 0x39AD54u;
            goto label_39ad54;
        }
    }
    ctx->pc = 0x39AD4Cu;
label_39ad4c:
    // 0x39ad4c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x39ad4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_39ad50:
    // 0x39ad50: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39ad50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_39ad54:
    // 0x39ad54: 0x663ffc4  bgezl       $s3, . + 4 + (-0x3C << 2)
label_39ad58:
    if (ctx->pc == 0x39AD58u) {
        ctx->pc = 0x39AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD54u;
        // 0x39ad58: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AD5Cu;
        goto label_39ad5c;
    }
    ctx->pc = 0x39AD54u;
    {
        const bool branch_taken_0x39ad54 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x39ad54) {
            ctx->pc = 0x39AD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AD54u;
            // 0x39ad58: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ac68;
        }
    }
    ctx->pc = 0x39AD5Cu;
label_39ad5c:
    // 0x39ad5c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x39ad5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_39ad60:
    // 0x39ad60: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x39ad60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_39ad64:
    // 0x39ad64: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x39ad64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_39ad68:
    // 0x39ad68: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x39ad68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_39ad6c:
    // 0x39ad6c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x39ad6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_39ad70:
    // 0x39ad70: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x39ad70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_39ad74:
    // 0x39ad74: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x39ad74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_39ad78:
    // 0x39ad78: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x39ad78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_39ad7c:
    // 0x39ad7c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x39ad7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_39ad80:
    // 0x39ad80: 0x3e00008  jr          $ra
label_39ad84:
    if (ctx->pc == 0x39AD84u) {
        ctx->pc = 0x39AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD80u;
        // 0x39ad84: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AD88u;
        goto label_fallthrough_0x39ad80;
    }
    ctx->pc = 0x39AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD80u;
        // 0x39ad84: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39ad80:
    ctx->pc = 0x39AD88u;
}
