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

// Function: sub_004E64E0
// Address: 0x4e64e0 - 0x4e64f0
void sub_004E64E0_0x4e64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E64E0_0x4e64e0");
#endif

    switch (ctx->pc) {
        case 0x4e64e8u: goto label_4e64e8;
        default: break;
    }

    ctx->pc = 0x4e64e0u;

    // 0x4e64e0: 0x445f474d  .word       0x445F474D                   # cfc1        $ra, $8 # 0000074D <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e64e0u;
    SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR8
    // 0x4e64e4: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e64e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e64e8:
    // 0x4e64e8: 0x6e69465f  ldr         $t1, 0x465F($s3)
    ctx->pc = 0x4e64e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e64ec: 0x687369  .word       0x00687369                   # mtsa        $v1 # 00087340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e64ecu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    ctx->pc = 0x4e64f0u;
}
