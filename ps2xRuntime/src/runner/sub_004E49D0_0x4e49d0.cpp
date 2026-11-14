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

// Function: sub_004E49D0
// Address: 0x4e49d0 - 0x4e49f0
void sub_004E49D0_0x4e49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E49D0_0x4e49d0");
#endif

    ctx->pc = 0x4e49d0u;

    // 0x4e49d0: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E49D0u;
    {
        const bool branch_taken_0x4e49d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e49d0) {
            ctx->pc = 0x4E49D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E49D0u;
            // 0x4e49d4: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500B8Cu;
            return;
        }
    }
    ctx->pc = 0x4E49D8u;
    // 0x4e49d8: 0x6f69765f  ldr         $t1, 0x765F($k1)
    ctx->pc = 0x4e49d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e49dc: 0x636e656c  daddi       $t6, $k1, 0x656C
    ctx->pc = 0x4e49dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4e49e0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e49e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e49e4: 0x0  nop
    ctx->pc = 0x4e49e4u;
    // NOP
    // 0x4e49e8: 0x0  nop
    ctx->pc = 0x4e49e8u;
    // NOP
    // 0x4e49ec: 0x0  nop
    ctx->pc = 0x4e49ecu;
    // NOP
    ctx->pc = 0x4e49f0u;
}
