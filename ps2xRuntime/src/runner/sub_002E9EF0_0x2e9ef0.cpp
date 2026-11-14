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

// Function: sub_002E9EF0
// Address: 0x2e9ef0 - 0x2e9f70
void sub_002E9EF0_0x2e9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9EF0_0x2e9ef0");
#endif

    switch (ctx->pc) {
        case 0x2e9f6cu: goto label_2e9f6c;
        default: break;
    }

    ctx->pc = 0x2e9ef0u;

    // 0x2e9ef0: 0x73a01628  paddub      $v0, $sp, $zero
    ctx->pc = 0x2e9ef0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    // 0x2e9ef4: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x2e9ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x2e9ef8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2e9ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2e9efc: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2e9efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2e9f00: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2e9f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2e9f04: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2e9f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x2e9f08: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2e9f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x2e9f0c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x2e9f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x2e9f10: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x2e9f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
    // 0x2e9f14: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x2e9f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x2e9f18: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x2e9f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x2e9f1c: 0xe7b40288  swc1        $f20, 0x288($sp)
    ctx->pc = 0x2e9f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x2e9f20: 0xe7b5028c  swc1        $f21, 0x28C($sp)
    ctx->pc = 0x2e9f20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
    // 0x2e9f24: 0xe7b60290  swc1        $f22, 0x290($sp)
    ctx->pc = 0x2e9f24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2e9f28: 0xe7b70294  swc1        $f23, 0x294($sp)
    ctx->pc = 0x2e9f28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
    // 0x2e9f2c: 0xe7b80298  swc1        $f24, 0x298($sp)
    ctx->pc = 0x2e9f2cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x2e9f30: 0xe7b9029c  swc1        $f25, 0x29C($sp)
    ctx->pc = 0x2e9f30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
    // 0x2e9f34: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x2e9f34u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2e9f38: 0xe7bb02a4  swc1        $f27, 0x2A4($sp)
    ctx->pc = 0x2e9f38u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x2e9f3c: 0xe7bc02a8  swc1        $f28, 0x2A8($sp)
    ctx->pc = 0x2e9f3cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x2e9f40: 0xe7bd02ac  swc1        $f29, 0x2AC($sp)
    ctx->pc = 0x2e9f40u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
    // 0x2e9f44: 0xe7be02b0  swc1        $f30, 0x2B0($sp)
    ctx->pc = 0x2e9f44u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2e9f48: 0xe7bf02b4  swc1        $f31, 0x2B4($sp)
    ctx->pc = 0x2e9f48u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
    // 0x2e9f4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2e9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2e9f50: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2e9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2e9f54: 0xafbf0010  sw          $ra, 0x10($sp)
    ctx->pc = 0x2e9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 31));
    // 0x2e9f58: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e9f5c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e9f60: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2e9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2e9f64: 0xc0ba228  jal         func_2E88A0
    ctx->pc = 0x2E9F64u;
    SET_GPR_U32(ctx, 31, 0x2E9F6Cu);
    ctx->pc = 0x2E9F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F64u;
    // 0x2e9f68: 0x73a02628  paddub      $a0, $sp, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 29), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E88A0u, 0x2E9F64u, 0x2E9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F6Cu;
label_2e9f6c:
    // 0x2e9f6c: 0x0  nop
    ctx->pc = 0x2e9f6cu;
    // NOP
    ctx->pc = 0x2e9f70u;
}
