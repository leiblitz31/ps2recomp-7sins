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

// Function: sub_005DED90
// Address: 0x5ded90 - 0x5dedb0
void sub_005DED90_0x5ded90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DED90_0x5ded90");
#endif

    ctx->pc = 0x5ded90u;

    // 0x5ded90: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ded90u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DED90 raw=0x75646F6D");
    // 0x5ded94: 0x6946656c  ldl         $a2, 0x656C($t2)
    ctx->pc = 0x5ded94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5ded98: 0x616e656c  daddi       $t6, $t3, 0x656C
    ctx->pc = 0x5ded98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5ded9c: 0x5b73656d  .word       0x5B73656D                   # blezl       $k1, . + 4 + (0x656D << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5DED9Cu;
    {
        const bool branch_taken_0x5ded9c = (GPR_S32(ctx, 27) <= 0);
        if (branch_taken_0x5ded9c) {
            ctx->pc = 0x5DEDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DED9Cu;
            // 0x5deda0: 0x5d69  .word       0x00005D69                   # mtsa        $zero # 00005D40 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            ctx->sa = GPR_U32(ctx, 0) & 0x7F;
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F8354u;
            return;
        }
    }
    ctx->pc = 0x5DEDA4u;
    // 0x5deda4: 0x0  nop
    ctx->pc = 0x5deda4u;
    // NOP
    // 0x5deda8: 0x0  nop
    ctx->pc = 0x5deda8u;
    // NOP
    // 0x5dedac: 0x0  nop
    ctx->pc = 0x5dedacu;
    // NOP
    ctx->pc = 0x5dedb0u;
}
