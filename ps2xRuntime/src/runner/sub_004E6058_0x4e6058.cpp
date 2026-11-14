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

// Function: sub_004E6058
// Address: 0x4e6058 - 0x4e6070
void sub_004E6058_0x4e6058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6058_0x4e6058");
#endif

    switch (ctx->pc) {
        case 0x4e606cu: goto label_4e606c;
        default: break;
    }

    ctx->pc = 0x4e6058u;

    // 0x4e6058: 0x43747874  .word       0x43747874                   # INVALID     $k1, $s4, 0x7874 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6058u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x4E6058 raw=0x43747874");
    // 0x4e605c: 0x6f626d6f  ldr         $v0, 0x6D6F($k1)
    ctx->pc = 0x4e605cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4e6060: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6060u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
    // 0x4e6064: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6064u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e6068: 0x0  nop
    ctx->pc = 0x4e6068u;
    // NOP
label_4e606c:
    // 0x4e606c: 0x0  nop
    ctx->pc = 0x4e606cu;
    // NOP
    ctx->pc = 0x4e6070u;
}
