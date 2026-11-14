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

// Function: sub_004ED568
// Address: 0x4ed568 - 0x4ed580
void sub_004ED568_0x4ed568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED568_0x4ed568");
#endif

    ctx->pc = 0x4ed568u;

    // 0x4ed568: 0x6c637865  ldr         $v1, 0x7865($v1)
    ctx->pc = 0x4ed568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30821); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ed56c: 0x315f6d61  andi        $ra, $t2, 0x6D61
    ctx->pc = 0x4ed56cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)28001);
    // 0x4ed570: 0x0  nop
    ctx->pc = 0x4ed570u;
    // NOP
    // 0x4ed574: 0x0  nop
    ctx->pc = 0x4ed574u;
    // NOP
    // 0x4ed578: 0x0  nop
    ctx->pc = 0x4ed578u;
    // NOP
    // 0x4ed57c: 0x0  nop
    ctx->pc = 0x4ed57cu;
    // NOP
    ctx->pc = 0x4ed580u;
}
