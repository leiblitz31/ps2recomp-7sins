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

// Function: sub_004E48E0
// Address: 0x4e48e0 - 0x4e48f0
void sub_004E48E0_0x4e48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E48E0_0x4e48e0");
#endif

    ctx->pc = 0x4e48e0u;

    // 0x4e48e0: 0x725f6270  .word       0x725F6270                   # INVALID     $s2, $ra, 0x6270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e48e0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E48E0 raw=0x725F6270");
    // 0x4e48e4: 0x6d5f6c65  ldr         $ra, 0x6C65($t2)
    ctx->pc = 0x4e48e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 27749); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e48e8: 0x6b7361  .word       0x006B7361                   # addu        $t6, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e48e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x4e48ec: 0x0  nop
    ctx->pc = 0x4e48ecu;
    // NOP
    ctx->pc = 0x4e48f0u;
}
