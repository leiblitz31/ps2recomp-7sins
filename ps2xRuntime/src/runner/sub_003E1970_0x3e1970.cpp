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

// Function: sub_003E1970
// Address: 0x3e1970 - 0x3e1bb0
void sub_003E1970_0x3e1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1970_0x3e1970");
#endif

    switch (ctx->pc) {
        case 0x3e1970u: goto label_3e1970;
        case 0x3e1974u: goto label_3e1974;
        case 0x3e1978u: goto label_3e1978;
        case 0x3e197cu: goto label_3e197c;
        case 0x3e1980u: goto label_3e1980;
        case 0x3e1984u: goto label_3e1984;
        case 0x3e1988u: goto label_3e1988;
        case 0x3e198cu: goto label_3e198c;
        case 0x3e1990u: goto label_3e1990;
        case 0x3e1994u: goto label_3e1994;
        case 0x3e1998u: goto label_3e1998;
        case 0x3e199cu: goto label_3e199c;
        case 0x3e19a0u: goto label_3e19a0;
        case 0x3e19a4u: goto label_3e19a4;
        case 0x3e19a8u: goto label_3e19a8;
        case 0x3e19acu: goto label_3e19ac;
        case 0x3e19b0u: goto label_3e19b0;
        case 0x3e19b4u: goto label_3e19b4;
        case 0x3e19b8u: goto label_3e19b8;
        case 0x3e19bcu: goto label_3e19bc;
        case 0x3e19c0u: goto label_3e19c0;
        case 0x3e19c4u: goto label_3e19c4;
        case 0x3e19c8u: goto label_3e19c8;
        case 0x3e19ccu: goto label_3e19cc;
        case 0x3e19d0u: goto label_3e19d0;
        case 0x3e19d4u: goto label_3e19d4;
        case 0x3e19d8u: goto label_3e19d8;
        case 0x3e19dcu: goto label_3e19dc;
        case 0x3e19e0u: goto label_3e19e0;
        case 0x3e19e4u: goto label_3e19e4;
        case 0x3e19e8u: goto label_3e19e8;
        case 0x3e19ecu: goto label_3e19ec;
        case 0x3e19f0u: goto label_3e19f0;
        case 0x3e19f4u: goto label_3e19f4;
        case 0x3e19f8u: goto label_3e19f8;
        case 0x3e19fcu: goto label_3e19fc;
        case 0x3e1a00u: goto label_3e1a00;
        case 0x3e1a04u: goto label_3e1a04;
        case 0x3e1a08u: goto label_3e1a08;
        case 0x3e1a0cu: goto label_3e1a0c;
        case 0x3e1a10u: goto label_3e1a10;
        case 0x3e1a14u: goto label_3e1a14;
        case 0x3e1a18u: goto label_3e1a18;
        case 0x3e1a1cu: goto label_3e1a1c;
        case 0x3e1a20u: goto label_3e1a20;
        case 0x3e1a24u: goto label_3e1a24;
        case 0x3e1a28u: goto label_3e1a28;
        case 0x3e1a2cu: goto label_3e1a2c;
        case 0x3e1a30u: goto label_3e1a30;
        case 0x3e1a34u: goto label_3e1a34;
        case 0x3e1a38u: goto label_3e1a38;
        case 0x3e1a3cu: goto label_3e1a3c;
        case 0x3e1a40u: goto label_3e1a40;
        case 0x3e1a44u: goto label_3e1a44;
        case 0x3e1a48u: goto label_3e1a48;
        case 0x3e1a4cu: goto label_3e1a4c;
        case 0x3e1a50u: goto label_3e1a50;
        case 0x3e1a54u: goto label_3e1a54;
        case 0x3e1a58u: goto label_3e1a58;
        case 0x3e1a5cu: goto label_3e1a5c;
        case 0x3e1a60u: goto label_3e1a60;
        case 0x3e1a64u: goto label_3e1a64;
        case 0x3e1a68u: goto label_3e1a68;
        case 0x3e1a6cu: goto label_3e1a6c;
        case 0x3e1a70u: goto label_3e1a70;
        case 0x3e1a74u: goto label_3e1a74;
        case 0x3e1a78u: goto label_3e1a78;
        case 0x3e1a7cu: goto label_3e1a7c;
        case 0x3e1a80u: goto label_3e1a80;
        case 0x3e1a84u: goto label_3e1a84;
        case 0x3e1a88u: goto label_3e1a88;
        case 0x3e1a8cu: goto label_3e1a8c;
        case 0x3e1a90u: goto label_3e1a90;
        case 0x3e1a94u: goto label_3e1a94;
        case 0x3e1a98u: goto label_3e1a98;
        case 0x3e1a9cu: goto label_3e1a9c;
        case 0x3e1aa0u: goto label_3e1aa0;
        case 0x3e1aa4u: goto label_3e1aa4;
        case 0x3e1aa8u: goto label_3e1aa8;
        case 0x3e1aacu: goto label_3e1aac;
        case 0x3e1ab0u: goto label_3e1ab0;
        case 0x3e1ab4u: goto label_3e1ab4;
        case 0x3e1ab8u: goto label_3e1ab8;
        case 0x3e1abcu: goto label_3e1abc;
        case 0x3e1ac0u: goto label_3e1ac0;
        case 0x3e1ac4u: goto label_3e1ac4;
        case 0x3e1ac8u: goto label_3e1ac8;
        case 0x3e1accu: goto label_3e1acc;
        case 0x3e1ad0u: goto label_3e1ad0;
        case 0x3e1ad4u: goto label_3e1ad4;
        case 0x3e1ad8u: goto label_3e1ad8;
        case 0x3e1adcu: goto label_3e1adc;
        case 0x3e1ae0u: goto label_3e1ae0;
        case 0x3e1ae4u: goto label_3e1ae4;
        case 0x3e1ae8u: goto label_3e1ae8;
        case 0x3e1aecu: goto label_3e1aec;
        case 0x3e1af0u: goto label_3e1af0;
        case 0x3e1af4u: goto label_3e1af4;
        case 0x3e1af8u: goto label_3e1af8;
        case 0x3e1afcu: goto label_3e1afc;
        case 0x3e1b00u: goto label_3e1b00;
        case 0x3e1b04u: goto label_3e1b04;
        case 0x3e1b08u: goto label_3e1b08;
        case 0x3e1b0cu: goto label_3e1b0c;
        case 0x3e1b10u: goto label_3e1b10;
        case 0x3e1b14u: goto label_3e1b14;
        case 0x3e1b18u: goto label_3e1b18;
        case 0x3e1b1cu: goto label_3e1b1c;
        case 0x3e1b20u: goto label_3e1b20;
        case 0x3e1b24u: goto label_3e1b24;
        case 0x3e1b28u: goto label_3e1b28;
        case 0x3e1b2cu: goto label_3e1b2c;
        case 0x3e1b30u: goto label_3e1b30;
        case 0x3e1b34u: goto label_3e1b34;
        case 0x3e1b38u: goto label_3e1b38;
        case 0x3e1b3cu: goto label_3e1b3c;
        case 0x3e1b40u: goto label_3e1b40;
        case 0x3e1b44u: goto label_3e1b44;
        case 0x3e1b48u: goto label_3e1b48;
        case 0x3e1b4cu: goto label_3e1b4c;
        case 0x3e1b50u: goto label_3e1b50;
        case 0x3e1b54u: goto label_3e1b54;
        case 0x3e1b58u: goto label_3e1b58;
        case 0x3e1b5cu: goto label_3e1b5c;
        case 0x3e1b60u: goto label_3e1b60;
        case 0x3e1b64u: goto label_3e1b64;
        case 0x3e1b68u: goto label_3e1b68;
        case 0x3e1b6cu: goto label_3e1b6c;
        case 0x3e1b70u: goto label_3e1b70;
        case 0x3e1b74u: goto label_3e1b74;
        case 0x3e1b78u: goto label_3e1b78;
        case 0x3e1b7cu: goto label_3e1b7c;
        case 0x3e1b80u: goto label_3e1b80;
        case 0x3e1b84u: goto label_3e1b84;
        case 0x3e1b88u: goto label_3e1b88;
        case 0x3e1b8cu: goto label_3e1b8c;
        case 0x3e1b90u: goto label_3e1b90;
        case 0x3e1b94u: goto label_3e1b94;
        case 0x3e1b98u: goto label_3e1b98;
        case 0x3e1b9cu: goto label_3e1b9c;
        case 0x3e1ba0u: goto label_3e1ba0;
        case 0x3e1ba4u: goto label_3e1ba4;
        case 0x3e1ba8u: goto label_3e1ba8;
        case 0x3e1bacu: goto label_3e1bac;
        default: break;
    }

    ctx->pc = 0x3e1970u;

label_3e1970:
    // 0x3e1970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e1974:
    // 0x3e1974: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3e1974u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1978:
    // 0x3e1978: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e1978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3e197c:
    // 0x3e197c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3e1980:
    // 0x3e1980: 0x2449e2c8  addiu       $t1, $v0, -0x1D38
    ctx->pc = 0x3e1980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959816));
label_3e1984:
    // 0x3e1984: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x3e1984u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1988:
    // 0x3e1988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e1988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e198c:
    // 0x3e198c: 0x240e005b  addiu       $t6, $zero, 0x5B
    ctx->pc = 0x3e198cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_3e1990:
    // 0x3e1990: 0x240d005d  addiu       $t5, $zero, 0x5D
    ctx->pc = 0x3e1990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_3e1994:
    // 0x3e1994: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x3e1994u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1998:
    // 0x3e1998: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3e1998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e199c:
    // 0x3e199c: 0x25880200  addiu       $t0, $t4, 0x200
    ctx->pc = 0x3e199cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 512));
label_3e19a0:
    // 0x3e19a0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x3e19a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3e19a4:
    // 0x3e19a4: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3e19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
label_3e19a8:
    // 0x3e19a8: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3e19a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
label_3e19ac:
    // 0x3e19ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e19b0:
    if (ctx->pc == 0x3E19B0u) {
        ctx->pc = 0x3E19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19ACu;
        // 0x3e19b0: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E19B4u;
        goto label_3e19b4;
    }
    ctx->pc = 0x3E19ACu;
    {
        const bool branch_taken_0x3e19ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19ACu;
        // 0x3e19b0: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e19ac) {
            ctx->pc = 0x3E19C0u;
            goto label_3e19c0;
        }
    }
    ctx->pc = 0x3E19B4u;
label_3e19b4:
    // 0x3e19b4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3e19b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3e19b8:
    // 0x3e19b8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3e19bc:
    if (ctx->pc == 0x3E19BCu) {
        ctx->pc = 0x3E19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19B8u;
        // 0x3e19bc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E19C0u;
        goto label_3e19c0;
    }
    ctx->pc = 0x3E19B8u;
    {
        const bool branch_taken_0x3e19b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e19b8) {
            ctx->pc = 0x3E19BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E19B8u;
            // 0x3e19bc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E19FCu;
            goto label_3e19fc;
        }
    }
    ctx->pc = 0x3E19C0u;
label_3e19c0:
    // 0x3e19c0: 0xa0ce0000  sb          $t6, 0x0($a2)
    ctx->pc = 0x3e19c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 14));
label_3e19c4:
    // 0x3e19c4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x3e19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_3e19c8:
    // 0x3e19c8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3e19cc:
    // 0x3e19cc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3e19ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3e19d0:
    // 0x3e19d0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e19d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e19d4:
    // 0x3e19d4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3e19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3e19d8:
    // 0x3e19d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e19d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e19dc:
    // 0x3e19dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e19dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e19e0:
    // 0x3e19e0: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e19e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_3e19e4:
    // 0x3e19e4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e19e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e19e8:
    // 0x3e19e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e19e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e19ec:
    // 0x3e19ec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e19ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e19f0:
    // 0x3e19f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e19f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e19f4:
    // 0x3e19f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e19f8:
    if (ctx->pc == 0x3E19F8u) {
        ctx->pc = 0x3E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19F4u;
        // 0x3e19f8: 0xa0cd0000  sb          $t5, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E19FCu;
        goto label_3e19fc;
    }
    ctx->pc = 0x3E19F4u;
    {
        const bool branch_taken_0x3e19f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19F4u;
        // 0x3e19f8: 0xa0cd0000  sb          $t5, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e19f4) {
            ctx->pc = 0x3E1A00u;
            goto label_3e1a00;
        }
    }
    ctx->pc = 0x3E19FCu;
label_3e19fc:
    // 0x3e19fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e19fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1a00:
    // 0x3e1a00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1a04:
    // 0x3e1a04: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x3e1a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3e1a08:
    // 0x3e1a08: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x3e1a08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
label_3e1a0c:
    // 0x3e1a0c: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3e1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
label_3e1a10:
    // 0x3e1a10: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3e1a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
label_3e1a14:
    // 0x3e1a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3e1a18:
    if (ctx->pc == 0x3E1A18u) {
        ctx->pc = 0x3E1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A14u;
        // 0x3e1a18: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A1Cu;
        goto label_3e1a1c;
    }
    ctx->pc = 0x3E1A14u;
    {
        const bool branch_taken_0x3e1a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A14u;
        // 0x3e1a18: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a14) {
            ctx->pc = 0x3E1A2Cu;
            goto label_3e1a2c;
        }
    }
    ctx->pc = 0x3E1A1Cu;
label_3e1a1c:
    // 0x3e1a1c: 0x2462ffa5  addiu       $v0, $v1, -0x5B
    ctx->pc = 0x3e1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
label_3e1a20:
    // 0x3e1a20: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3e1a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3e1a24:
    // 0x3e1a24: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3e1a28:
    if (ctx->pc == 0x3E1A28u) {
        ctx->pc = 0x3E1A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A24u;
        // 0x3e1a28: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A2Cu;
        goto label_3e1a2c;
    }
    ctx->pc = 0x3E1A24u;
    {
        const bool branch_taken_0x3e1a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1a24) {
            ctx->pc = 0x3E1A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1A24u;
            // 0x3e1a28: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1A68u;
            goto label_3e1a68;
        }
    }
    ctx->pc = 0x3E1A2Cu;
label_3e1a2c:
    // 0x3e1a2c: 0xa0ce0000  sb          $t6, 0x0($a2)
    ctx->pc = 0x3e1a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 14));
label_3e1a30:
    // 0x3e1a30: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x3e1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_3e1a34:
    // 0x3e1a34: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3e1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_3e1a38:
    // 0x3e1a38: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3e1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_3e1a3c:
    // 0x3e1a3c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e1a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e1a40:
    // 0x3e1a40: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3e1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3e1a44:
    // 0x3e1a44: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3e1a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e1a48:
    // 0x3e1a48: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1a4c:
    // 0x3e1a4c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3e1a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_3e1a50:
    // 0x3e1a50: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3e1a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3e1a54:
    // 0x3e1a54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1a58:
    // 0x3e1a58: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3e1a58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1a5c:
    // 0x3e1a5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e1a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3e1a60:
    // 0x3e1a60: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e1a64:
    if (ctx->pc == 0x3E1A64u) {
        ctx->pc = 0x3E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A60u;
        // 0x3e1a64: 0xa0cd0000  sb          $t5, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A68u;
        goto label_3e1a68;
    }
    ctx->pc = 0x3E1A60u;
    {
        const bool branch_taken_0x3e1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A60u;
        // 0x3e1a64: 0xa0cd0000  sb          $t5, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a60) {
            ctx->pc = 0x3E1A6Cu;
            goto label_3e1a6c;
        }
    }
    ctx->pc = 0x3E1A68u;
label_3e1a68:
    // 0x3e1a68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1a6c:
    // 0x3e1a6c: 0x561ffcc  bgez        $t3, . + 4 + (-0x34 << 2)
label_3e1a70:
    if (ctx->pc == 0x3E1A70u) {
        ctx->pc = 0x3E1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A6Cu;
        // 0x3e1a70: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A74u;
        goto label_3e1a74;
    }
    ctx->pc = 0x3E1A6Cu;
    {
        const bool branch_taken_0x3e1a6c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x3E1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A6Cu;
        // 0x3e1a70: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a6c) {
            ctx->pc = 0x3E19A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e19a0;
        }
    }
    ctx->pc = 0x3E1A74u;
label_3e1a74:
    // 0x3e1a74: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_3e1a78:
    if (ctx->pc == 0x3E1A78u) {
        ctx->pc = 0x3E1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A74u;
        // 0x3e1a78: 0x1471821  addu        $v1, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A7Cu;
        goto label_3e1a7c;
    }
    ctx->pc = 0x3E1A74u;
    {
        const bool branch_taken_0x3e1a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A74u;
        // 0x3e1a78: 0x1471821  addu        $v1, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a74) {
            ctx->pc = 0x3E1A88u;
            goto label_3e1a88;
        }
    }
    ctx->pc = 0x3E1A7Cu;
label_3e1a7c:
    // 0x3e1a7c: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x3e1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3e1a80:
    // 0x3e1a80: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3e1a84:
    if (ctx->pc == 0x3E1A84u) {
        ctx->pc = 0x3E1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A80u;
        // 0x3e1a84: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A88u;
        goto label_3e1a88;
    }
    ctx->pc = 0x3E1A80u;
    {
        const bool branch_taken_0x3e1a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1A80u;
        // 0x3e1a84: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a80) {
            ctx->pc = 0x3E1B2Cu;
            goto label_3e1b2c;
        }
    }
    ctx->pc = 0x3E1A88u;
label_3e1a88:
    // 0x3e1a88: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x3e1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_3e1a8c:
    // 0x3e1a8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1a90:
    // 0x3e1a90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3e1a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e1a94:
    // 0x3e1a94: 0x1472021  addu        $a0, $t2, $a3
    ctx->pc = 0x3e1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3e1a98:
    // 0x3e1a98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3e1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1a9c:
    // 0x3e1a9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e1a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e1aa0:
    // 0x3e1aa0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3e1aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e1aa4:
    // 0x3e1aa4: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x3e1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3e1aa8:
    // 0x3e1aa8: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x3e1aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3e1aac:
    // 0x3e1aac: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x3e1aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3e1ab0:
    // 0x3e1ab0: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x3e1ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3e1ab4:
    // 0x3e1ab4: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x3e1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3e1ab8:
    // 0x3e1ab8: 0x68a60017  ldl         $a2, 0x17($a1)
    ctx->pc = 0x3e1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3e1abc:
    // 0x3e1abc: 0x6ca60010  ldr         $a2, 0x10($a1)
    ctx->pc = 0x3e1abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3e1ac0:
    // 0x3e1ac0: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x3e1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3e1ac4:
    // 0x3e1ac4: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x3e1ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3e1ac8:
    // 0x3e1ac8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3e1ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1acc:
    // 0x3e1acc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3e1accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1ad0:
    // 0x3e1ad0: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3e1ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1ad4:
    // 0x3e1ad4: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3e1ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1ad8:
    // 0x3e1ad8: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x3e1ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1adc:
    // 0x3e1adc: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x3e1adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1ae0:
    // 0x3e1ae0: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x3e1ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1ae4:
    // 0x3e1ae4: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x3e1ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1ae8:
    // 0x3e1ae8: 0x68a30027  ldl         $v1, 0x27($a1)
    ctx->pc = 0x3e1ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3e1aec:
    // 0x3e1aec: 0x6ca30020  ldr         $v1, 0x20($a1)
    ctx->pc = 0x3e1aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3e1af0:
    // 0x3e1af0: 0x68a4002f  ldl         $a0, 0x2F($a1)
    ctx->pc = 0x3e1af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3e1af4:
    // 0x3e1af4: 0x6ca40028  ldr         $a0, 0x28($a1)
    ctx->pc = 0x3e1af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3e1af8:
    // 0x3e1af8: 0x68a60037  ldl         $a2, 0x37($a1)
    ctx->pc = 0x3e1af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3e1afc:
    // 0x3e1afc: 0x6ca60030  ldr         $a2, 0x30($a1)
    ctx->pc = 0x3e1afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3e1b00:
    // 0x3e1b00: 0x68a7003f  ldl         $a3, 0x3F($a1)
    ctx->pc = 0x3e1b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3e1b04:
    // 0x3e1b04: 0x6ca70038  ldr         $a3, 0x38($a1)
    ctx->pc = 0x3e1b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3e1b08:
    // 0x3e1b08: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x3e1b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b0c:
    // 0x3e1b0c: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x3e1b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b10:
    // 0x3e1b10: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x3e1b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b14:
    // 0x3e1b14: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x3e1b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b18:
    // 0x3e1b18: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x3e1b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b1c:
    // 0x3e1b1c: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x3e1b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b20:
    // 0x3e1b20: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x3e1b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b24:
    // 0x3e1b24: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x3e1b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3e1b28:
    // 0x3e1b28: 0xa040003f  sb          $zero, 0x3F($v0)
    ctx->pc = 0x3e1b28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 63), (uint8_t)GPR_U32(ctx, 0));
label_3e1b2c:
    // 0x3e1b2c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x3e1b2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1b30:
    // 0x3e1b30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e1b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e1b34:
    // 0x3e1b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e1b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1b38:
    // 0x3e1b38: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3e1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3e1b3c:
    // 0x3e1b3c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_3e1b40:
    if (ctx->pc == 0x3E1B40u) {
        ctx->pc = 0x3E1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B3Cu;
        // 0x3e1b40: 0x8d8700d4  lw          $a3, 0xD4($t4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B44u;
        goto label_3e1b44;
    }
    ctx->pc = 0x3E1B3Cu;
    {
        const bool branch_taken_0x3e1b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B3Cu;
        // 0x3e1b40: 0x8d8700d4  lw          $a3, 0xD4($t4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b3c) {
            ctx->pc = 0x3E1B80u;
            goto label_3e1b80;
        }
    }
    ctx->pc = 0x3E1B44u;
label_3e1b44:
    // 0x3e1b44: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x3e1b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_3e1b48:
    // 0x3e1b48: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3e1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1b4c:
    // 0x3e1b4c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3e1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3e1b50:
    // 0x3e1b50: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3e1b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_3e1b54:
    // 0x3e1b54: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_3e1b58:
    if (ctx->pc == 0x3E1B58u) {
        ctx->pc = 0x3E1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B54u;
        // 0x3e1b58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B5Cu;
        goto label_3e1b5c;
    }
    ctx->pc = 0x3E1B54u;
    {
        const bool branch_taken_0x3e1b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B54u;
        // 0x3e1b58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b54) {
            ctx->pc = 0x3E1B80u;
            goto label_3e1b80;
        }
    }
    ctx->pc = 0x3E1B5Cu;
label_3e1b5c:
    // 0x3e1b5c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3e1b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e1b60:
    // 0x3e1b60: 0x27a30001  addiu       $v1, $sp, 0x1
    ctx->pc = 0x3e1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
label_3e1b64:
    // 0x3e1b64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3e1b68:
    // 0x3e1b68: 0x2882000f  slti        $v0, $a0, 0xF
    ctx->pc = 0x3e1b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_3e1b6c:
    // 0x3e1b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e1b70:
    if (ctx->pc == 0x3E1B70u) {
        ctx->pc = 0x3E1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B6Cu;
        // 0x3e1b70: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B74u;
        goto label_3e1b74;
    }
    ctx->pc = 0x3E1B6Cu;
    {
        const bool branch_taken_0x3e1b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B6Cu;
        // 0x3e1b70: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b6c) {
            ctx->pc = 0x3E1B80u;
            goto label_3e1b80;
        }
    }
    ctx->pc = 0x3E1B74u;
label_3e1b74:
    // 0x3e1b74: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3e1b74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e1b78:
    // 0x3e1b78: 0x5446fffb  bnel        $v0, $a2, . + 4 + (-0x5 << 2)
label_3e1b7c:
    if (ctx->pc == 0x3E1B7Cu) {
        ctx->pc = 0x3E1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B78u;
        // 0x3e1b7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B80u;
        goto label_3e1b80;
    }
    ctx->pc = 0x3E1B78u;
    {
        const bool branch_taken_0x3e1b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3e1b78) {
            ctx->pc = 0x3E1B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1B78u;
            // 0x3e1b7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1b68;
        }
    }
    ctx->pc = 0x3E1B80u;
label_3e1b80:
    // 0x3e1b80: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_3e1b84:
    if (ctx->pc == 0x3E1B84u) {
        ctx->pc = 0x3E1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B80u;
        // 0x3e1b84: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B88u;
        goto label_3e1b88;
    }
    ctx->pc = 0x3E1B80u;
    {
        const bool branch_taken_0x3e1b80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B80u;
        // 0x3e1b84: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b80) {
            ctx->pc = 0x3E1B98u;
            goto label_3e1b98;
        }
    }
    ctx->pc = 0x3E1B88u;
label_3e1b88:
    // 0x3e1b88: 0xe0f809  jalr        $a3
label_3e1b8c:
    if (ctx->pc == 0x3E1B8Cu) {
        ctx->pc = 0x3E1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B88u;
        // 0x3e1b8c: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B90u;
        goto label_3e1b90;
    }
    ctx->pc = 0x3E1B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x3E1B90u);
        ctx->pc = 0x3E1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B88u;
        // 0x3e1b8c: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1B88u, 0x3E1B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1B90u;
label_3e1b90:
    // 0x3e1b90: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e1b94:
    if (ctx->pc == 0x3E1B94u) {
        ctx->pc = 0x3E1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B90u;
        // 0x3e1b94: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1B98u;
        goto label_3e1b98;
    }
    ctx->pc = 0x3E1B90u;
    {
        const bool branch_taken_0x3e1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B90u;
        // 0x3e1b94: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b90) {
            ctx->pc = 0x3E1BA4u;
            goto label_3e1ba4;
        }
    }
    ctx->pc = 0x3E1B98u;
label_3e1b98:
    // 0x3e1b98: 0xc0f87a6  jal         func_3E1E98
label_3e1b9c:
    if (ctx->pc == 0x3E1B9Cu) {
        ctx->pc = 0x3E1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1B98u;
        // 0x3e1b9c: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BA0u;
        goto label_3e1ba0;
    }
    ctx->pc = 0x3E1B98u;
    SET_GPR_U32(ctx, 31, 0x3E1BA0u);
    ctx->pc = 0x3E1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1B98u;
    // 0x3e1b9c: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E98u, 0x3E1B98u, 0x3E1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BA0u;
label_3e1ba0:
    // 0x3e1ba0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e1ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3e1ba4:
    // 0x3e1ba4: 0x3e00008  jr          $ra
label_3e1ba8:
    if (ctx->pc == 0x3E1BA8u) {
        ctx->pc = 0x3E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BA4u;
        // 0x3e1ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BACu;
        goto label_3e1bac;
    }
    ctx->pc = 0x3E1BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BA4u;
        // 0x3e1ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1BACu;
label_3e1bac:
    // 0x3e1bac: 0x0  nop
    ctx->pc = 0x3e1bacu;
    // NOP
    ctx->pc = 0x3e1bb0u;
}
