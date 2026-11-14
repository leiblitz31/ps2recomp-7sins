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

// Function: sub_003A0900
// Address: 0x3a0900 - 0x3a0a58
void sub_003A0900_0x3a0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0900_0x3a0900");
#endif

    switch (ctx->pc) {
        case 0x3a09d0u: goto label_3a09d0;
        default: break;
    }

    ctx->pc = 0x3a0900u;

    // 0x3a0900: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a0900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a0904: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3a0904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3a0908: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a0908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a090c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3A090Cu;
    {
        const bool branch_taken_0x3a090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A090Cu;
        // 0x3a0910: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a090c) {
            ctx->pc = 0x3A0A50u;
            goto label_3a0a50;
        }
    }
    ctx->pc = 0x3A0914u;
    // 0x3a0914: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3a0914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3a0918: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3a0918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a091c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a0920: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a0920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a0924: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x3a0924u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0928: 0x11a00049  beqz        $t5, . + 4 + (0x49 << 2)
    ctx->pc = 0x3A0928u;
    {
        const bool branch_taken_0x3a0928 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0928u;
        // 0x3a092c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0928) {
            ctx->pc = 0x3A0A50u;
            goto label_3a0a50;
        }
    }
    ctx->pc = 0x3A0930u;
    // 0x3a0930: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x3a0930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3a0934: 0x19a00019  blez        $t5, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A0934u;
    {
        const bool branch_taken_0x3a0934 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x3A0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0934u;
        // 0x3a0938: 0x31a30003  andi        $v1, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0934) {
            ctx->pc = 0x3A099Cu;
            goto label_3a099c;
        }
    }
    ctx->pc = 0x3A093Cu;
    // 0x3a093c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A093Cu;
    {
        const bool branch_taken_0x3a093c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A093Cu;
        // 0x3a0940: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a093c) {
            ctx->pc = 0x3A09C8u;
            goto label_3a09c8;
        }
    }
    ctx->pc = 0x3A0944u;
    // 0x3a0944: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A0944u;
    {
        const bool branch_taken_0x3a0944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0944) {
            ctx->pc = 0x3A0948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0944u;
            // 0x3a0948: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A09A0u;
            goto label_3a09a0;
        }
    }
    ctx->pc = 0x3A094Cu;
    // 0x3a094c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a094cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a0950: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3A0950u;
    {
        const bool branch_taken_0x3a0950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0950) {
            ctx->pc = 0x3A0954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0950u;
            // 0x3a0954: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A097Cu;
            goto label_3a097c;
        }
    }
    ctx->pc = 0x3A0958u;
    // 0x3a0958: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3a0958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a095c: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x3a095cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a0960: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3a0960u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0964: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3a0964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3a0968: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3a0968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3a096c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a096cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0970: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3a0970u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a0974: 0x248a0018  addiu       $t2, $a0, 0x18
    ctx->pc = 0x3a0974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3a0978: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a0978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a097c:
    // 0x3a097c: 0x25450008  addiu       $a1, $t2, 0x8
    ctx->pc = 0x3a097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3a0980: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a0980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a0984: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3a0984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3a0988: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3a0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a098c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a0990: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a0990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0994: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a0994u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0998: 0xa35021  addu        $t2, $a1, $v1
    ctx->pc = 0x3a0998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3a099c:
    // 0x3a099c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a09a0:
    // 0x3a09a0: 0x25450008  addiu       $a1, $t2, 0x8
    ctx->pc = 0x3a09a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3a09a4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3a09a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3a09a8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a09a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a09ac: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3a09acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a09b0: 0x16d602b  sltu        $t4, $t3, $t5
    ctx->pc = 0x3a09b0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3a09b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3a09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a09b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a09bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a09c0: 0x11800023  beqz        $t4, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A09C0u;
    {
        const bool branch_taken_0x3a09c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A09C0u;
        // 0x3a09c4: 0xa25021  addu        $t2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a09c0) {
            ctx->pc = 0x3A0A50u;
            goto label_3a0a50;
        }
    }
    ctx->pc = 0x3A09C8u;
label_3a09c8:
    // 0x3a09c8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a09c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09cc: 0x0  nop
    ctx->pc = 0x3a09ccu;
    // NOP
label_3a09d0:
    // 0x3a09d0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x3a09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a09d4: 0x25480008  addiu       $t0, $t2, 0x8
    ctx->pc = 0x3a09d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3a09d8: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3a09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3a09dc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3a09dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3a09e0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3a09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3a09e4: 0x16d602b  sltu        $t4, $t3, $t5
    ctx->pc = 0x3a09e4u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3a09e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3a09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a09ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3a09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a09f0: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x3a09f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3a09f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3a09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a09f8: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x3a09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3a09fc: 0x1035021  addu        $t2, $t0, $v1
    ctx->pc = 0x3a09fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3a0a00: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3a0a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a0a04: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a0a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a0a08: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a0a0c: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x3a0a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3a0a10: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x3a0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3a0a14: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x3a0a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3a0a18: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x3a0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3a0a1c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3a0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3a0a20: 0x465021  addu        $t2, $v0, $a2
    ctx->pc = 0x3a0a20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3a0a24: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3a0a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a0a28: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3a0a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x3a0a2c: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x3a0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3a0a30: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3a0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3a0a34: 0x455021  addu        $t2, $v0, $a1
    ctx->pc = 0x3a0a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a0a38: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x3a0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x3a0a3c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a0a40: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x3a0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3a0a44: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x3a0a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0a48: 0x1580ffe1  bnez        $t4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3A0A48u;
    {
        const bool branch_taken_0x3a0a48 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A48u;
        // 0x3a0a4c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a48) {
            ctx->pc = 0x3A09D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a09d0;
        }
    }
    ctx->pc = 0x3A0A50u;
label_3a0a50:
    // 0x3a0a50: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A50u;
        // 0x3a0a54: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0A58u;
}
