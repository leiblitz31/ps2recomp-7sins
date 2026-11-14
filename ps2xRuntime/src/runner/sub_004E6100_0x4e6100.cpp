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

// Function: sub_004E6100
// Address: 0x4e6100 - 0x4e6130
void sub_004E6100_0x4e6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6100_0x4e6100");
#endif

    ctx->pc = 0x4e6100u;

    // 0x4e6100: 0x736d6168  .word       0x736D6168                   # pabsh       $t4, $t5 # 03600000 <InstrIdType: R5900_MMI_1>
    ctx->pc = 0x4e6100u;
    SET_GPR_VEC(ctx, 12, PS2_PABSH(GPR_VEC(ctx, 27)));
    // 0x4e6104: 0x5f726574  .word       0x5F726574                   # bgtzl       $k1, . + 4 + (0x6574 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6104u;
    {
        const bool branch_taken_0x4e6104 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6104) {
            ctx->pc = 0x4E6108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6104u;
            // 0x4e6108: 0x6b616e73  ldl         $at, 0x6E73($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF6D8u;
            return;
        }
    }
    ctx->pc = 0x4E610Cu;
    // 0x4e610c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e610cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e6110: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6110u;
    {
        const bool branch_taken_0x4e6110 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6110) {
            ctx->pc = 0x4E6114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6110u;
            // 0x4e6114: 0x33306c72  andi        $s0, $t9, 0x6C72 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)27762);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5042E4u;
            return;
        }
    }
    ctx->pc = 0x4E6118u;
    // 0x4e6118: 0x0  nop
    ctx->pc = 0x4e6118u;
    // NOP
    // 0x4e611c: 0x0  nop
    ctx->pc = 0x4e611cu;
    // NOP
    // 0x4e6120: 0x0  nop
    ctx->pc = 0x4e6120u;
    // NOP
    // 0x4e6124: 0x0  nop
    ctx->pc = 0x4e6124u;
    // NOP
    // 0x4e6128: 0x0  nop
    ctx->pc = 0x4e6128u;
    // NOP
    // 0x4e612c: 0x0  nop
    ctx->pc = 0x4e612cu;
    // NOP
    ctx->pc = 0x4e6130u;
}
