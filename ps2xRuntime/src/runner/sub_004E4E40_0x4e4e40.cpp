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

// Function: sub_004E4E40
// Address: 0x4e4e40 - 0x4e4e58
void sub_004E4E40_0x4e4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E40_0x4e4e40");
#endif

    ctx->pc = 0x4e4e40u;

    // 0x4e4e40: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4E40u;
    {
        const bool branch_taken_0x4e4e40 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4e40) {
            ctx->pc = 0x4E4E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4E40u;
            // 0x4e4e44: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4E44 raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x500004u;
            return;
        }
    }
    ctx->pc = 0x4E4E48u;
    // 0x4e4e48: 0x6e6f6d5f  ldr         $t7, 0x6D5F($s3)
    ctx->pc = 0x4e4e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e4e4c: 0x61677965  daddi       $a3, $t3, 0x7965
    ctx->pc = 0x4e4e4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31077; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
    // 0x4e4e50: 0x64656e69  daddiu      $a1, $v1, 0x6E69
    ctx->pc = 0x4e4e50u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28265);
    // 0x4e4e54: 0x0  nop
    ctx->pc = 0x4e4e54u;
    // NOP
    ctx->pc = 0x4e4e58u;
}
