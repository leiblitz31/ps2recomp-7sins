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

// Function: sub_004E6488
// Address: 0x4e6488 - 0x4e6498
void sub_004E6488_0x4e6488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6488_0x4e6488");
#endif

    ctx->pc = 0x4e6488u;

    // 0x4e6488: 0x445f474d  .word       0x445F474D                   # cfc1        $ra, $8 # 0000074D <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6488u;
    SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR8
    // 0x4e648c: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e648cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e6490: 0x6b61545f  ldl         $at, 0x545F($k1)
    ctx->pc = 0x4e6490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x4e6494: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6494u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4e6498u;
}
