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

// Function: sub_004E4AF0
// Address: 0x4e4af0 - 0x4e4b10
void sub_004E4AF0_0x4e4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4AF0_0x4e4af0");
#endif

    switch (ctx->pc) {
        case 0x4e4b04u: goto label_4e4b04;
        case 0x4e4b08u: goto label_4e4b08;
        default: break;
    }

    ctx->pc = 0x4e4af0u;

    // 0x4e4af0: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4AF0u;
    {
        const bool branch_taken_0x4e4af0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4af0) {
            ctx->pc = 0x4E4AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4AF0u;
            // 0x4e4af4: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500CACu;
            return;
        }
    }
    ctx->pc = 0x4E4AF8u;
    // 0x4e4af8: 0x6e65735f  ldr         $a1, 0x735F($s3)
    ctx->pc = 0x4e4af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4afc: 0x34626973  ori         $v0, $v1, 0x6973
    ctx->pc = 0x4e4afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26995);
    // 0x4e4b00: 0x0  nop
    ctx->pc = 0x4e4b00u;
    // NOP
label_4e4b04:
    // 0x4e4b04: 0x0  nop
    ctx->pc = 0x4e4b04u;
    // NOP
label_4e4b08:
    // 0x4e4b08: 0x0  nop
    ctx->pc = 0x4e4b08u;
    // NOP
    // 0x4e4b0c: 0x0  nop
    ctx->pc = 0x4e4b0cu;
    // NOP
    ctx->pc = 0x4e4b10u;
}
