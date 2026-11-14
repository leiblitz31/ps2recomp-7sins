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

// Function: sub_004E3258
// Address: 0x4e3258 - 0x4e3268
void sub_004E3258_0x4e3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3258_0x4e3258");
#endif

    ctx->pc = 0x4e3258u;

    // 0x4e3258: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e325c: 0x736f725f  .word       0x736F725F                   # INVALID     $k1, $t7, 0x725F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e325cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E325C raw=0x736F725F");
    // 0x4e3260: 0x65735f65  daddiu      $s3, $t3, 0x5F65
    ctx->pc = 0x4e3260u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e3264: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4e3264u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    ctx->pc = 0x4e3268u;
}
