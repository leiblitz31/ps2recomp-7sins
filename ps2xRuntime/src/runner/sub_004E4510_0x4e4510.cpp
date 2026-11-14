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

// Function: sub_004E4510
// Address: 0x4e4510 - 0x4e4520
void sub_004E4510_0x4e4510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4510_0x4e4510");
#endif

    ctx->pc = 0x4e4510u;

    // 0x4e4510: 0x454d4954  .word       0x454D4954                   # INVALID     $t2, $t5, 0x4954 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e4510u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x4E4510 raw=0x454D4954");
    // 0x4e4514: 0x54554f20  bnel        $v0, $s5, . + 4 + (0x4F20 << 2)
    ctx->pc = 0x4E4514u;
    {
        const bool branch_taken_0x4e4514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x4e4514) {
            ctx->pc = 0x4F8198u;
            return;
        }
    }
    ctx->pc = 0x4E451Cu;
    // 0x4e451c: 0x0  nop
    ctx->pc = 0x4e451cu;
    // NOP
    ctx->pc = 0x4e4520u;
}
