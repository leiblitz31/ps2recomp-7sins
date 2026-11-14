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

// Function: sub_004E6928
// Address: 0x4e6928 - 0x4e6938
void sub_004E6928_0x4e6928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6928_0x4e6928");
#endif

    ctx->pc = 0x4e6928u;

    // 0x4e6928: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6928u;
    {
        const bool branch_taken_0x4e6928 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6928) {
            ctx->pc = 0x4E692Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6928u;
            // 0x4e692c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E692C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501ED0u;
            return;
        }
    }
    ctx->pc = 0x4E6930u;
    // 0x4e6930: 0x44565f45  .word       0x44565F45                   # cfc1        $s6, $11 # 00000745 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6930u;
    SET_GPR_U32(ctx, 22, 0); // Unimplemented FCR11
    // 0x4e6934: 0x0  nop
    ctx->pc = 0x4e6934u;
    // NOP
    ctx->pc = 0x4e6938u;
}
