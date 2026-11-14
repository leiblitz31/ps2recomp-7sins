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

// Function: sub_004E3248
// Address: 0x4e3248 - 0x4e3258
void sub_004E3248_0x4e3248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3248_0x4e3248");
#endif

    ctx->pc = 0x4e3248u;

    // 0x4e3248: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e324c: 0x5845535f  .word       0x5845535F                   # blezl       $v0, . + 4 + (0x535F << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E324Cu;
    {
        const bool branch_taken_0x4e324c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e324c) {
            ctx->pc = 0x4E3250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E324Cu;
            // 0x4e3250: 0x474d5f45  .word       0x474D5F45                   # INVALID     $k0, $t5, 0x5F45 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x5 at 0x4E3250 raw=0x474D5F45");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7FCCu;
            return;
        }
    }
    ctx->pc = 0x4E3254u;
    // 0x4e3254: 0x0  nop
    ctx->pc = 0x4e3254u;
    // NOP
    ctx->pc = 0x4e3258u;
}
