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

// Function: sub_005DF270
// Address: 0x5df270 - 0x5df290
void sub_005DF270_0x5df270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF270_0x5df270");
#endif

    ctx->pc = 0x5df270u;

    // 0x5df270: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5df270u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5df274: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5df274u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df278: 0x446d756e  .word       0x446D756E                   # INVALID     $v1, $t5, 0x756E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df278u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x2E at 0x5DF278 raw=0x446D756E");
    // 0x5df27c: 0x4f737269  .word       0x4F737269                   # INVALID     $k1, $s3, 0x7269 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df27cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF27C raw=0x4F737269");
    // 0x5df280: 0x69617462  ldl         $at, 0x7462($t3)
    ctx->pc = 0x5df280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29794); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x5df284: 0x64656e  .word       0x0064656E                   # dsub        $t4, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df284u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x5df288: 0x0  nop
    ctx->pc = 0x5df288u;
    // NOP
    // 0x5df28c: 0x0  nop
    ctx->pc = 0x5df28cu;
    // NOP
    ctx->pc = 0x5df290u;
}
