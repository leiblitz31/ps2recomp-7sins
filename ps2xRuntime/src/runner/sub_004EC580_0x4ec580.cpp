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

// Function: sub_004EC580
// Address: 0x4ec580 - 0x4ec590
void sub_004EC580_0x4ec580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC580_0x4ec580");
#endif

    ctx->pc = 0x4ec580u;

    // 0x4ec580: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec584: 0x65732e6c  daddiu      $s3, $t3, 0x2E6C
    ctx->pc = 0x4ec584u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
    // 0x4ec588: 0x75656972  .word       0x75656972                   # INVALID     $t3, $a1, 0x6972 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec588u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC588 raw=0x75656972");
    // 0x4ec58c: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4ec58cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    ctx->pc = 0x4ec590u;
}
