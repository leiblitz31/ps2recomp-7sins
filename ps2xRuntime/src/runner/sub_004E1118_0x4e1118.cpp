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

// Function: sub_004E1118
// Address: 0x4e1118 - 0x4e1128
void sub_004E1118_0x4e1118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1118_0x4e1118");
#endif

    ctx->pc = 0x4e1118u;

    // 0x4e1118: 0x7373656d  .word       0x7373656D                   # INVALID     $k1, $s3, 0x656D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1118u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E1118 raw=0x7373656D");
    // 0x4e111c: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x4e111cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
    // 0x4e1120: 0x0  nop
    ctx->pc = 0x4e1120u;
    // NOP
    // 0x4e1124: 0x0  nop
    ctx->pc = 0x4e1124u;
    // NOP
    ctx->pc = 0x4e1128u;
}
