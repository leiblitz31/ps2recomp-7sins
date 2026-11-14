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

// Function: sub_005DEF80
// Address: 0x5def80 - 0x5defb0
void sub_005DEF80_0x5def80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEF80_0x5def80");
#endif

    ctx->pc = 0x5def80u;

    // 0x5def80: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5def80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5def84: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5def84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5def88: 0x3d206f4e  .word       0x3D206F4E                   # lui         $zero, 0x6F4E # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def88u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)28494 << 16));
    // 0x5def8c: 0x6373203d  daddi       $s3, $k1, 0x203D
    ctx->pc = 0x5def8cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8253; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
    // 0x5def90: 0x46634d65  .word       0x46634D65                   # INVALID     $s3, $v1, 0x4D65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5def90u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x25 at 0x5DEF90 raw=0x46634D65");
    // 0x5def94: 0x4e636e75  .word       0x4E636E75                   # INVALID     $s3, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def94u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEF94 raw=0x4E636E75");
    // 0x5def98: 0x7261436f  .word       0x7261436F                   # INVALID     $s3, $at, 0x436F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5def98u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEF98 raw=0x7261436F");
    // 0x5def9c: 0x666e4964  daddiu      $t6, $s3, 0x4964
    ctx->pc = 0x5def9cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)18788);
    // 0x5defa0: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5defa0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x5defa4: 0x0  nop
    ctx->pc = 0x5defa4u;
    // NOP
    // 0x5defa8: 0x0  nop
    ctx->pc = 0x5defa8u;
    // NOP
    // 0x5defac: 0x0  nop
    ctx->pc = 0x5defacu;
    // NOP
    ctx->pc = 0x5defb0u;
}
