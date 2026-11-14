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

// Function: sub_005DEE78
// Address: 0x5dee78 - 0x5dee90
void sub_005DEE78_0x5dee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEE78_0x5dee78");
#endif

    ctx->pc = 0x5dee78u;

    // 0x5dee78: 0x72694470  .word       0x72694470                   # INVALID     $s3, $t1, 0x4470 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5dee78u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x11 at 0x5DEE78 raw=0x72694470");
    // 0x5dee7c: 0x6f666e49  ldr         $a2, 0x6E49($k1)
    ctx->pc = 0x5dee7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x5dee80: 0x0  nop
    ctx->pc = 0x5dee80u;
    // NOP
    // 0x5dee84: 0x0  nop
    ctx->pc = 0x5dee84u;
    // NOP
    // 0x5dee88: 0x0  nop
    ctx->pc = 0x5dee88u;
    // NOP
    // 0x5dee8c: 0x0  nop
    ctx->pc = 0x5dee8cu;
    // NOP
    ctx->pc = 0x5dee90u;
}
