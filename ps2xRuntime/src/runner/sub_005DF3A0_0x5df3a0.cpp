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

// Function: sub_005DF3A0
// Address: 0x5df3a0 - 0x5df3c0
void sub_005DF3A0_0x5df3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF3A0_0x5df3a0");
#endif

    switch (ctx->pc) {
        case 0x5df3bcu: goto label_5df3bc;
        default: break;
    }

    ctx->pc = 0x5df3a0u;

    // 0x5df3a0: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5df3a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5df3a4: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5df3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5df3a8: 0x3d206f4e  .word       0x3D206F4E                   # lui         $zero, 0x6F4E # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df3a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)28494 << 16));
    // 0x5df3ac: 0x6373203d  daddi       $s3, $k1, 0x203D
    ctx->pc = 0x5df3acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8253; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
    // 0x5df3b0: 0x46634d65  .word       0x46634D65                   # INVALID     $s3, $v1, 0x4D65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df3b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x25 at 0x5DF3B0 raw=0x46634D65");
    // 0x5df3b4: 0x4e636e75  .word       0x4E636E75                   # INVALID     $s3, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df3b4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF3B4 raw=0x4E636E75");
    // 0x5df3b8: 0x6972576f  ldl         $s2, 0x576F($t3)
    ctx->pc = 0x5df3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 22383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_5df3bc:
    // 0x5df3bc: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x5df3bcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x5df3c0u;
}
