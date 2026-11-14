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

// Function: sub_004ECF60
// Address: 0x4ecf60 - 0x4ecf70
void sub_004ECF60_0x4ecf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF60_0x4ecf60");
#endif

    ctx->pc = 0x4ecf60u;

    // 0x4ecf60: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x4ecf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4ecf64: 0x2e736e6f  sltiu       $s3, $s3, 0x6E6F
    ctx->pc = 0x4ecf64u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28271) ? 1 : 0);
    // 0x4ecf68: 0x7473696c  .word       0x7473696C                   # INVALID     $v1, $s3, 0x696C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecf68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECF68 raw=0x7473696C");
    // 0x4ecf6c: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecf6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4ecf70u;
}
