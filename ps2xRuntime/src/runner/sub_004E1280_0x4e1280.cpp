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

// Function: sub_004E1280
// Address: 0x4e1280 - 0x4e1290
void sub_004E1280_0x4e1280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1280_0x4e1280");
#endif

    ctx->pc = 0x4e1280u;

    // 0x4e1280: 0x43525426  .word       0x43525426                   # INVALID     $k0, $s2, 0x5426 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e1280u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E1280 raw=0x43525426");
    // 0x4e1284: 0x7061635f  .word       0x7061635F                   # INVALID     $v1, $at, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1284u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E1284 raw=0x7061635F");
    // 0x4e1288: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e1288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e128c: 0x0  nop
    ctx->pc = 0x4e128cu;
    // NOP
    ctx->pc = 0x4e1290u;
}
