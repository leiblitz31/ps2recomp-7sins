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

// Function: sub_005DEFF0
// Address: 0x5deff0 - 0x5df010
void sub_005DEFF0_0x5deff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEFF0_0x5deff0");
#endif

    ctx->pc = 0x5deff0u;

    // 0x5deff0: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5deff0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5deff4: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5deff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5deff8: 0x3d206f4e  .word       0x3D206F4E                   # lui         $zero, 0x6F4E # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deff8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)28494 << 16));
    // 0x5deffc: 0x6373203d  daddi       $s3, $k1, 0x203D
    ctx->pc = 0x5deffcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8253; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
    // 0x5df000: 0x46634d65  .word       0x46634D65                   # INVALID     $s3, $v1, 0x4D65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df000u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x25 at 0x5DF000 raw=0x46634D65");
    // 0x5df004: 0x4e636e75  .word       0x4E636E75                   # INVALID     $s3, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df004u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF004 raw=0x4E636E75");
    // 0x5df008: 0x726f466f  .word       0x726F466F                   # INVALID     $s3, $t7, 0x466F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df008u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DF008 raw=0x726F466F");
    // 0x5df00c: 0x74616d  .word       0x0074616D                   # daddu       $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df00cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 20));
    ctx->pc = 0x5df010u;
}
