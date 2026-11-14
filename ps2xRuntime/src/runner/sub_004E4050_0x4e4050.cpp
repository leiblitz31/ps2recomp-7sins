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

// Function: sub_004E4050
// Address: 0x4e4050 - 0x4e4070
void sub_004E4050_0x4e4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4050_0x4e4050");
#endif

    ctx->pc = 0x4e4050u;

    // 0x4e4050: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e4050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e4054: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e4054u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
    // 0x4e4058: 0x765f656d  .word       0x765F656D                   # INVALID     $s2, $ra, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4058u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4058 raw=0x765F656D");
    // 0x4e405c: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x4e405cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
    // 0x4e4060: 0x0  nop
    ctx->pc = 0x4e4060u;
    // NOP
    // 0x4e4064: 0x0  nop
    ctx->pc = 0x4e4064u;
    // NOP
    // 0x4e4068: 0x0  nop
    ctx->pc = 0x4e4068u;
    // NOP
    // 0x4e406c: 0x0  nop
    ctx->pc = 0x4e406cu;
    // NOP
    ctx->pc = 0x4e4070u;
}
