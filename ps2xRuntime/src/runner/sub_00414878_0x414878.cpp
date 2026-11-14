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

// Function: sub_00414878
// Address: 0x414878 - 0x414c70
void sub_00414878_0x414878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414878_0x414878");
#endif

    switch (ctx->pc) {
        case 0x414878u: goto label_414878;
        case 0x41487cu: goto label_41487c;
        case 0x414880u: goto label_414880;
        case 0x414884u: goto label_414884;
        case 0x414888u: goto label_414888;
        case 0x41488cu: goto label_41488c;
        case 0x414890u: goto label_414890;
        case 0x414894u: goto label_414894;
        case 0x414898u: goto label_414898;
        case 0x41489cu: goto label_41489c;
        case 0x4148a0u: goto label_4148a0;
        case 0x4148a4u: goto label_4148a4;
        case 0x4148a8u: goto label_4148a8;
        case 0x4148acu: goto label_4148ac;
        case 0x4148b0u: goto label_4148b0;
        case 0x4148b4u: goto label_4148b4;
        case 0x4148b8u: goto label_4148b8;
        case 0x4148bcu: goto label_4148bc;
        case 0x4148c0u: goto label_4148c0;
        case 0x4148c4u: goto label_4148c4;
        case 0x4148c8u: goto label_4148c8;
        case 0x4148ccu: goto label_4148cc;
        case 0x4148d0u: goto label_4148d0;
        case 0x4148d4u: goto label_4148d4;
        case 0x4148d8u: goto label_4148d8;
        case 0x4148dcu: goto label_4148dc;
        case 0x4148e0u: goto label_4148e0;
        case 0x4148e4u: goto label_4148e4;
        case 0x4148e8u: goto label_4148e8;
        case 0x4148ecu: goto label_4148ec;
        case 0x4148f0u: goto label_4148f0;
        case 0x4148f4u: goto label_4148f4;
        case 0x4148f8u: goto label_4148f8;
        case 0x4148fcu: goto label_4148fc;
        case 0x414900u: goto label_414900;
        case 0x414904u: goto label_414904;
        case 0x414908u: goto label_414908;
        case 0x41490cu: goto label_41490c;
        case 0x414910u: goto label_414910;
        case 0x414914u: goto label_414914;
        case 0x414918u: goto label_414918;
        case 0x41491cu: goto label_41491c;
        case 0x414920u: goto label_414920;
        case 0x414924u: goto label_414924;
        case 0x414928u: goto label_414928;
        case 0x41492cu: goto label_41492c;
        case 0x414930u: goto label_414930;
        case 0x414934u: goto label_414934;
        case 0x414938u: goto label_414938;
        case 0x41493cu: goto label_41493c;
        case 0x414940u: goto label_414940;
        case 0x414944u: goto label_414944;
        case 0x414948u: goto label_414948;
        case 0x41494cu: goto label_41494c;
        case 0x414950u: goto label_414950;
        case 0x414954u: goto label_414954;
        case 0x414958u: goto label_414958;
        case 0x41495cu: goto label_41495c;
        case 0x414960u: goto label_414960;
        case 0x414964u: goto label_414964;
        case 0x414968u: goto label_414968;
        case 0x41496cu: goto label_41496c;
        case 0x414970u: goto label_414970;
        case 0x414974u: goto label_414974;
        case 0x414978u: goto label_414978;
        case 0x41497cu: goto label_41497c;
        case 0x414980u: goto label_414980;
        case 0x414984u: goto label_414984;
        case 0x414988u: goto label_414988;
        case 0x41498cu: goto label_41498c;
        case 0x414990u: goto label_414990;
        case 0x414994u: goto label_414994;
        case 0x414998u: goto label_414998;
        case 0x41499cu: goto label_41499c;
        case 0x4149a0u: goto label_4149a0;
        case 0x4149a4u: goto label_4149a4;
        case 0x4149a8u: goto label_4149a8;
        case 0x4149acu: goto label_4149ac;
        case 0x4149b0u: goto label_4149b0;
        case 0x4149b4u: goto label_4149b4;
        case 0x4149b8u: goto label_4149b8;
        case 0x4149bcu: goto label_4149bc;
        case 0x4149c0u: goto label_4149c0;
        case 0x4149c4u: goto label_4149c4;
        case 0x4149c8u: goto label_4149c8;
        case 0x4149ccu: goto label_4149cc;
        case 0x4149d0u: goto label_4149d0;
        case 0x4149d4u: goto label_4149d4;
        case 0x4149d8u: goto label_4149d8;
        case 0x4149dcu: goto label_4149dc;
        case 0x4149e0u: goto label_4149e0;
        case 0x4149e4u: goto label_4149e4;
        case 0x4149e8u: goto label_4149e8;
        case 0x4149ecu: goto label_4149ec;
        case 0x4149f0u: goto label_4149f0;
        case 0x4149f4u: goto label_4149f4;
        case 0x4149f8u: goto label_4149f8;
        case 0x4149fcu: goto label_4149fc;
        case 0x414a00u: goto label_414a00;
        case 0x414a04u: goto label_414a04;
        case 0x414a08u: goto label_414a08;
        case 0x414a0cu: goto label_414a0c;
        case 0x414a10u: goto label_414a10;
        case 0x414a14u: goto label_414a14;
        case 0x414a18u: goto label_414a18;
        case 0x414a1cu: goto label_414a1c;
        case 0x414a20u: goto label_414a20;
        case 0x414a24u: goto label_414a24;
        case 0x414a28u: goto label_414a28;
        case 0x414a2cu: goto label_414a2c;
        case 0x414a30u: goto label_414a30;
        case 0x414a34u: goto label_414a34;
        case 0x414a38u: goto label_414a38;
        case 0x414a3cu: goto label_414a3c;
        case 0x414a40u: goto label_414a40;
        case 0x414a44u: goto label_414a44;
        case 0x414a48u: goto label_414a48;
        case 0x414a4cu: goto label_414a4c;
        case 0x414a50u: goto label_414a50;
        case 0x414a54u: goto label_414a54;
        case 0x414a58u: goto label_414a58;
        case 0x414a5cu: goto label_414a5c;
        case 0x414a60u: goto label_414a60;
        case 0x414a64u: goto label_414a64;
        case 0x414a68u: goto label_414a68;
        case 0x414a6cu: goto label_414a6c;
        case 0x414a70u: goto label_414a70;
        case 0x414a74u: goto label_414a74;
        case 0x414a78u: goto label_414a78;
        case 0x414a7cu: goto label_414a7c;
        case 0x414a80u: goto label_414a80;
        case 0x414a84u: goto label_414a84;
        case 0x414a88u: goto label_414a88;
        case 0x414a8cu: goto label_414a8c;
        case 0x414a90u: goto label_414a90;
        case 0x414a94u: goto label_414a94;
        case 0x414a98u: goto label_414a98;
        case 0x414a9cu: goto label_414a9c;
        case 0x414aa0u: goto label_414aa0;
        case 0x414aa4u: goto label_414aa4;
        case 0x414aa8u: goto label_414aa8;
        case 0x414aacu: goto label_414aac;
        case 0x414ab0u: goto label_414ab0;
        case 0x414ab4u: goto label_414ab4;
        case 0x414ab8u: goto label_414ab8;
        case 0x414abcu: goto label_414abc;
        case 0x414ac0u: goto label_414ac0;
        case 0x414ac4u: goto label_414ac4;
        case 0x414ac8u: goto label_414ac8;
        case 0x414accu: goto label_414acc;
        case 0x414ad0u: goto label_414ad0;
        case 0x414ad4u: goto label_414ad4;
        case 0x414ad8u: goto label_414ad8;
        case 0x414adcu: goto label_414adc;
        case 0x414ae0u: goto label_414ae0;
        case 0x414ae4u: goto label_414ae4;
        case 0x414ae8u: goto label_414ae8;
        case 0x414aecu: goto label_414aec;
        case 0x414af0u: goto label_414af0;
        case 0x414af4u: goto label_414af4;
        case 0x414af8u: goto label_414af8;
        case 0x414afcu: goto label_414afc;
        case 0x414b00u: goto label_414b00;
        case 0x414b04u: goto label_414b04;
        case 0x414b08u: goto label_414b08;
        case 0x414b0cu: goto label_414b0c;
        case 0x414b10u: goto label_414b10;
        case 0x414b14u: goto label_414b14;
        case 0x414b18u: goto label_414b18;
        case 0x414b1cu: goto label_414b1c;
        case 0x414b20u: goto label_414b20;
        case 0x414b24u: goto label_414b24;
        case 0x414b28u: goto label_414b28;
        case 0x414b2cu: goto label_414b2c;
        case 0x414b30u: goto label_414b30;
        case 0x414b34u: goto label_414b34;
        case 0x414b38u: goto label_414b38;
        case 0x414b3cu: goto label_414b3c;
        case 0x414b40u: goto label_414b40;
        case 0x414b44u: goto label_414b44;
        case 0x414b48u: goto label_414b48;
        case 0x414b4cu: goto label_414b4c;
        case 0x414b50u: goto label_414b50;
        case 0x414b54u: goto label_414b54;
        case 0x414b58u: goto label_414b58;
        case 0x414b5cu: goto label_414b5c;
        case 0x414b60u: goto label_414b60;
        case 0x414b64u: goto label_414b64;
        case 0x414b68u: goto label_414b68;
        case 0x414b6cu: goto label_414b6c;
        case 0x414b70u: goto label_414b70;
        case 0x414b74u: goto label_414b74;
        case 0x414b78u: goto label_414b78;
        case 0x414b7cu: goto label_414b7c;
        case 0x414b80u: goto label_414b80;
        case 0x414b84u: goto label_414b84;
        case 0x414b88u: goto label_414b88;
        case 0x414b8cu: goto label_414b8c;
        case 0x414b90u: goto label_414b90;
        case 0x414b94u: goto label_414b94;
        case 0x414b98u: goto label_414b98;
        case 0x414b9cu: goto label_414b9c;
        case 0x414ba0u: goto label_414ba0;
        case 0x414ba4u: goto label_414ba4;
        case 0x414ba8u: goto label_414ba8;
        case 0x414bacu: goto label_414bac;
        case 0x414bb0u: goto label_414bb0;
        case 0x414bb4u: goto label_414bb4;
        case 0x414bb8u: goto label_414bb8;
        case 0x414bbcu: goto label_414bbc;
        case 0x414bc0u: goto label_414bc0;
        case 0x414bc4u: goto label_414bc4;
        case 0x414bc8u: goto label_414bc8;
        case 0x414bccu: goto label_414bcc;
        case 0x414bd0u: goto label_414bd0;
        case 0x414bd4u: goto label_414bd4;
        case 0x414bd8u: goto label_414bd8;
        case 0x414bdcu: goto label_414bdc;
        case 0x414be0u: goto label_414be0;
        case 0x414be4u: goto label_414be4;
        case 0x414be8u: goto label_414be8;
        case 0x414becu: goto label_414bec;
        case 0x414bf0u: goto label_414bf0;
        case 0x414bf4u: goto label_414bf4;
        case 0x414bf8u: goto label_414bf8;
        case 0x414bfcu: goto label_414bfc;
        case 0x414c00u: goto label_414c00;
        case 0x414c04u: goto label_414c04;
        case 0x414c08u: goto label_414c08;
        case 0x414c0cu: goto label_414c0c;
        case 0x414c10u: goto label_414c10;
        case 0x414c14u: goto label_414c14;
        case 0x414c18u: goto label_414c18;
        case 0x414c1cu: goto label_414c1c;
        case 0x414c20u: goto label_414c20;
        case 0x414c24u: goto label_414c24;
        case 0x414c28u: goto label_414c28;
        case 0x414c2cu: goto label_414c2c;
        case 0x414c30u: goto label_414c30;
        case 0x414c34u: goto label_414c34;
        case 0x414c38u: goto label_414c38;
        case 0x414c3cu: goto label_414c3c;
        case 0x414c40u: goto label_414c40;
        case 0x414c44u: goto label_414c44;
        case 0x414c48u: goto label_414c48;
        case 0x414c4cu: goto label_414c4c;
        case 0x414c50u: goto label_414c50;
        case 0x414c54u: goto label_414c54;
        case 0x414c58u: goto label_414c58;
        case 0x414c5cu: goto label_414c5c;
        case 0x414c60u: goto label_414c60;
        case 0x414c64u: goto label_414c64;
        case 0x414c68u: goto label_414c68;
        case 0x414c6cu: goto label_414c6c;
        default: break;
    }

    ctx->pc = 0x414878u;

label_414878:
    // 0x414878: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x414878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_41487c:
    // 0x41487c: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x41487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_414880:
    // 0x414880: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x414880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_414884:
    // 0x414884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x414884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414888:
    // 0x414888: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x414888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_41488c:
    // 0x41488c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41488cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414890:
    // 0x414890: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x414890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_414894:
    // 0x414894: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x414894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_414898:
    // 0x414898: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x414898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_41489c:
    // 0x41489c: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x41489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_4148a0:
    // 0x4148a0: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x4148a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_4148a4:
    // 0x4148a4: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x4148a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_4148a8:
    // 0x4148a8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x4148a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_4148ac:
    // 0x4148ac: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x4148acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4148b0:
    // 0x4148b0: 0x27b200f4  addiu       $s2, $sp, 0xF4
    ctx->pc = 0x4148b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_4148b4:
    // 0x4148b4: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_4148b8:
    if (ctx->pc == 0x4148B8u) {
        ctx->pc = 0x4148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148B4u;
        // 0x4148b8: 0x27b000f8  addiu       $s0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148BCu;
        goto label_4148bc;
    }
    ctx->pc = 0x4148B4u;
    {
        const bool branch_taken_0x4148b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148B4u;
        // 0x4148b8: 0x27b000f8  addiu       $s0, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4148b4) {
            ctx->pc = 0x414C1Cu;
            goto label_414c1c;
        }
    }
    ctx->pc = 0x4148BCu;
label_4148bc:
    // 0x4148bc: 0x0  nop
    ctx->pc = 0x4148bcu;
    // NOP
label_4148c0:
    // 0x4148c0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4148c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_4148c4:
    // 0x4148c4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4148c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_4148c8:
    // 0x4148c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4148c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4148cc:
    // 0x4148cc: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4148ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_4148d0:
    // 0x4148d0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_4148d4:
    if (ctx->pc == 0x4148D4u) {
        ctx->pc = 0x4148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148D0u;
        // 0x4148d4: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148D8u;
        goto label_4148d8;
    }
    ctx->pc = 0x4148D0u;
    {
        const bool branch_taken_0x4148d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148D0u;
        // 0x4148d4: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4148d0) {
            ctx->pc = 0x414900u;
            goto label_414900;
        }
    }
    ctx->pc = 0x4148D8u;
label_4148d8:
    // 0x4148d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4148d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4148dc:
    // 0x4148dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4148dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4148e0:
    // 0x4148e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4148e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4148e4:
    // 0x4148e4: 0xc1035f6  jal         func_40D7D8
label_4148e8:
    if (ctx->pc == 0x4148E8u) {
        ctx->pc = 0x4148E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148E4u;
        // 0x4148e8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148ECu;
        goto label_4148ec;
    }
    ctx->pc = 0x4148E4u;
    SET_GPR_U32(ctx, 31, 0x4148ECu);
    ctx->pc = 0x4148E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4148E4u;
    // 0x4148e8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4148E4u, 0x4148ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4148ECu;
label_4148ec:
    // 0x4148ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4148ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4148f0:
    // 0x4148f0: 0xc103628  jal         func_40D8A0
label_4148f4:
    if (ctx->pc == 0x4148F4u) {
        ctx->pc = 0x4148F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148F0u;
        // 0x4148f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4148F8u;
        goto label_4148f8;
    }
    ctx->pc = 0x4148F0u;
    SET_GPR_U32(ctx, 31, 0x4148F8u);
    ctx->pc = 0x4148F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4148F0u;
    // 0x4148f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4148F0u, 0x4148F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4148F8u;
label_4148f8:
    // 0x4148f8: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_4148fc:
    if (ctx->pc == 0x4148FCu) {
        ctx->pc = 0x4148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148F8u;
        // 0x4148fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414900u;
        goto label_414900;
    }
    ctx->pc = 0x4148F8u;
    {
        const bool branch_taken_0x4148f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4148F8u;
        // 0x4148fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4148f8) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414900u;
label_414900:
    // 0x414900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x414900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_414904:
    // 0x414904: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
label_414908:
    if (ctx->pc == 0x414908u) {
        ctx->pc = 0x414908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414904u;
        // 0x414908: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41490Cu;
        goto label_41490c;
    }
    ctx->pc = 0x414904u;
    {
        const bool branch_taken_0x414904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x414908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414904u;
        // 0x414908: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414904) {
            ctx->pc = 0x414A74u;
            goto label_414a74;
        }
    }
    ctx->pc = 0x41490Cu;
label_41490c:
    // 0x41490c: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x41490cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_414910:
    // 0x414910: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x414910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_414914:
    // 0x414914: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x414914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414918:
    // 0x414918: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
label_41491c:
    if (ctx->pc == 0x41491Cu) {
        ctx->pc = 0x41491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414918u;
        // 0x41491c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414920u;
        goto label_414920;
    }
    ctx->pc = 0x414918u;
    {
        const bool branch_taken_0x414918 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x41491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414918u;
        // 0x41491c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414918) {
            ctx->pc = 0x414970u;
            goto label_414970;
        }
    }
    ctx->pc = 0x414920u;
label_414920:
    // 0x414920: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x414920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_414924:
    // 0x414924: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x414924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_414928:
    // 0x414928: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x414928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_41492c:
    // 0x41492c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414930:
    // 0x414930: 0x40f809  jalr        $v0
label_414934:
    if (ctx->pc == 0x414934u) {
        ctx->pc = 0x414934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414930u;
        // 0x414934: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x414938u;
        goto label_414938;
    }
    ctx->pc = 0x414930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414938u);
        ctx->pc = 0x414934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414930u;
        // 0x414934: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414930u, 0x414938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414938u;
label_414938:
    // 0x414938: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x414938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41493c:
    // 0x41493c: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_414940:
    if (ctx->pc == 0x414940u) {
        ctx->pc = 0x414940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41493Cu;
        // 0x414940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414944u;
        goto label_414944;
    }
    ctx->pc = 0x41493Cu;
    {
        const bool branch_taken_0x41493c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x414940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41493Cu;
        // 0x414940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41493c) {
            ctx->pc = 0x414970u;
            goto label_414970;
        }
    }
    ctx->pc = 0x414944u;
label_414944:
    // 0x414944: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x414944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_414948:
    // 0x414948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41494c:
    // 0x41494c: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x41494cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_414950:
    // 0x414950: 0xc1035f6  jal         func_40D7D8
label_414954:
    if (ctx->pc == 0x414954u) {
        ctx->pc = 0x414954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414950u;
        // 0x414954: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x414958u;
        goto label_414958;
    }
    ctx->pc = 0x414950u;
    SET_GPR_U32(ctx, 31, 0x414958u);
    ctx->pc = 0x414954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414950u;
    // 0x414954: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x414950u, 0x414958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414958u;
label_414958:
    // 0x414958: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x414958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_41495c:
    // 0x41495c: 0xc103628  jal         func_40D8A0
label_414960:
    if (ctx->pc == 0x414960u) {
        ctx->pc = 0x414960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41495Cu;
        // 0x414960: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414964u;
        goto label_414964;
    }
    ctx->pc = 0x41495Cu;
    SET_GPR_U32(ctx, 31, 0x414964u);
    ctx->pc = 0x414960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41495Cu;
    // 0x414960: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41495Cu, 0x414964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414964u;
label_414964:
    // 0x414964: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_414968:
    if (ctx->pc == 0x414968u) {
        ctx->pc = 0x414968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414964u;
        // 0x414968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41496Cu;
        goto label_41496c;
    }
    ctx->pc = 0x414964u;
    {
        const bool branch_taken_0x414964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414964u;
        // 0x414968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414964) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x41496Cu;
label_41496c:
    // 0x41496c: 0x0  nop
    ctx->pc = 0x41496cu;
    // NOP
label_414970:
    // 0x414970: 0x120000a4  beqz        $s0, . + 4 + (0xA4 << 2)
label_414974:
    if (ctx->pc == 0x414974u) {
        ctx->pc = 0x414974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414970u;
        // 0x414974: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414978u;
        goto label_414978;
    }
    ctx->pc = 0x414970u;
    {
        const bool branch_taken_0x414970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414970u;
        // 0x414974: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414970) {
            ctx->pc = 0x414C04u;
            goto label_414c04;
        }
    }
    ctx->pc = 0x414978u;
label_414978:
    // 0x414978: 0x24160040  addiu       $s6, $zero, 0x40
    ctx->pc = 0x414978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_41497c:
    // 0x41497c: 0x0  nop
    ctx->pc = 0x41497cu;
    // NOP
label_414980:
    // 0x414980: 0x2e420041  sltiu       $v0, $s2, 0x41
    ctx->pc = 0x414980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
label_414984:
    // 0x414984: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x414984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_414988:
    // 0x414988: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x414988u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_41498c:
    // 0x41498c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_414990:
    // 0x414990: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x414990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_414994:
    // 0x414994: 0xc10480a  jal         func_412028
label_414998:
    if (ctx->pc == 0x414998u) {
        ctx->pc = 0x414998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414994u;
        // 0x414998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41499Cu;
        goto label_41499c;
    }
    ctx->pc = 0x414994u;
    SET_GPR_U32(ctx, 31, 0x41499Cu);
    ctx->pc = 0x414998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414994u;
    // 0x414998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x414994u, 0x41499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41499Cu;
label_41499c:
    // 0x41499c: 0x145000a7  bne         $v0, $s0, . + 4 + (0xA7 << 2)
label_4149a0:
    if (ctx->pc == 0x4149A0u) {
        ctx->pc = 0x4149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41499Cu;
        // 0x4149a0: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149A4u;
        goto label_4149a4;
    }
    ctx->pc = 0x41499Cu;
    {
        const bool branch_taken_0x41499c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41499Cu;
        // 0x4149a0: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41499c) {
            ctx->pc = 0x414C3Cu;
            goto label_414c3c;
        }
    }
    ctx->pc = 0x4149A4u;
label_4149a4:
    // 0x4149a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4149a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4149a8:
    // 0x4149a8: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_4149ac:
    if (ctx->pc == 0x4149ACu) {
        ctx->pc = 0x4149ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149A8u;
        // 0x4149ac: 0x2304821  addu        $t1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149B0u;
        goto label_4149b0;
    }
    ctx->pc = 0x4149A8u;
    {
        const bool branch_taken_0x4149a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4149ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149A8u;
        // 0x4149ac: 0x2304821  addu        $t1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4149a8) {
            ctx->pc = 0x414A64u;
            goto label_414a64;
        }
    }
    ctx->pc = 0x4149B0u;
label_4149b0:
    // 0x4149b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4149b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4149b4:
    // 0x4149b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4149b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4149b8:
    // 0x4149b8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4149b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4149bc:
    // 0x4149bc: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_4149c0:
    if (ctx->pc == 0x4149C0u) {
        ctx->pc = 0x4149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149BCu;
        // 0x4149c0: 0x32040003  andi        $a0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149C4u;
        goto label_4149c4;
    }
    ctx->pc = 0x4149BCu;
    {
        const bool branch_taken_0x4149bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149BCu;
        // 0x4149c0: 0x32040003  andi        $a0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4149bc) {
            ctx->pc = 0x414A08u;
            goto label_414a08;
        }
    }
    ctx->pc = 0x4149C4u;
label_4149c4:
    // 0x4149c4: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_4149c8:
    if (ctx->pc == 0x4149C8u) {
        ctx->pc = 0x4149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149C4u;
        // 0x4149c8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149CCu;
        goto label_4149cc;
    }
    ctx->pc = 0x4149C4u;
    {
        const bool branch_taken_0x4149c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149C4u;
        // 0x4149c8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4149c4) {
            ctx->pc = 0x414A24u;
            goto label_414a24;
        }
    }
    ctx->pc = 0x4149CCu;
label_4149cc:
    // 0x4149cc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_4149d0:
    if (ctx->pc == 0x4149D0u) {
        ctx->pc = 0x4149D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149CCu;
        // 0x4149d0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149D4u;
        goto label_4149d4;
    }
    ctx->pc = 0x4149CCu;
    {
        const bool branch_taken_0x4149cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4149cc) {
            ctx->pc = 0x4149D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4149CCu;
            // 0x4149d0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414A0Cu;
            goto label_414a0c;
        }
    }
    ctx->pc = 0x4149D4u;
label_4149d4:
    // 0x4149d4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x4149d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_4149d8:
    // 0x4149d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4149dc:
    if (ctx->pc == 0x4149DCu) {
        ctx->pc = 0x4149DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4149D8u;
        // 0x4149dc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4149E0u;
        goto label_4149e0;
    }
    ctx->pc = 0x4149D8u;
    {
        const bool branch_taken_0x4149d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4149d8) {
            ctx->pc = 0x4149DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4149D8u;
            // 0x4149dc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4149F8u;
            goto label_4149f8;
        }
    }
    ctx->pc = 0x4149E0u;
label_4149e0:
    // 0x4149e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4149e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4149e4:
    // 0x4149e4: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x4149e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4149e8:
    // 0x4149e8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x4149e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4149ec:
    // 0x4149ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4149ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4149f0:
    // 0x4149f0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4149f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_4149f4:
    // 0x4149f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4149f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4149f8:
    // 0x4149f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4149f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4149fc:
    // 0x4149fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4149fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_414a00:
    // 0x414a00: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x414a00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_414a04:
    // 0x414a04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x414a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_414a08:
    // 0x414a08: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x414a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_414a0c:
    // 0x414a0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x414a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_414a10:
    // 0x414a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x414a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_414a14:
    // 0x414a14: 0xf0402b  sltu        $t0, $a3, $s0
    ctx->pc = 0x414a14u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_414a18:
    // 0x414a18: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x414a18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_414a1c:
    // 0x414a1c: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
label_414a20:
    if (ctx->pc == 0x414A20u) {
        ctx->pc = 0x414A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A1Cu;
        // 0x414a20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A24u;
        goto label_414a24;
    }
    ctx->pc = 0x414A1Cu;
    {
        const bool branch_taken_0x414a1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x414A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A1Cu;
        // 0x414a20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a1c) {
            ctx->pc = 0x414A64u;
            goto label_414a64;
        }
    }
    ctx->pc = 0x414A24u;
label_414a24:
    // 0x414a24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x414a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_414a28:
    // 0x414a28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x414a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_414a2c:
    // 0x414a2c: 0x0  nop
    ctx->pc = 0x414a2cu;
    // NOP
label_414a30:
    // 0x414a30: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x414a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_414a34:
    // 0x414a34: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x414a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_414a38:
    // 0x414a38: 0xf0402b  sltu        $t0, $a3, $s0
    ctx->pc = 0x414a38u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_414a3c:
    // 0x414a3c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x414a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_414a40:
    // 0x414a40: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x414a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_414a44:
    // 0x414a44: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x414a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_414a48:
    // 0x414a48: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x414a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_414a4c:
    // 0x414a4c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x414a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_414a50:
    // 0x414a50: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x414a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_414a54:
    // 0x414a54: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x414a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_414a58:
    // 0x414a58: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x414a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_414a5c:
    // 0x414a5c: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
label_414a60:
    if (ctx->pc == 0x414A60u) {
        ctx->pc = 0x414A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A5Cu;
        // 0x414a60: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A64u;
        goto label_414a64;
    }
    ctx->pc = 0x414A5Cu;
    {
        const bool branch_taken_0x414a5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x414A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A5Cu;
        // 0x414a60: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a5c) {
            ctx->pc = 0x414A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414a30;
        }
    }
    ctx->pc = 0x414A64u;
label_414a64:
    // 0x414a64: 0x1640ffc6  bnez        $s2, . + 4 + (-0x3A << 2)
label_414a68:
    if (ctx->pc == 0x414A68u) {
        ctx->pc = 0x414A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A64u;
        // 0x414a68: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A6Cu;
        goto label_414a6c;
    }
    ctx->pc = 0x414A64u;
    {
        const bool branch_taken_0x414a64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x414A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A64u;
        // 0x414a68: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a64) {
            ctx->pc = 0x414980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414980;
        }
    }
    ctx->pc = 0x414A6Cu;
label_414a6c:
    // 0x414a6c: 0x10000074  b           . + 4 + (0x74 << 2)
label_414a70:
    if (ctx->pc == 0x414A70u) {
        ctx->pc = 0x414A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A6Cu;
        // 0x414a70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A74u;
        goto label_414a74;
    }
    ctx->pc = 0x414A6Cu;
    {
        const bool branch_taken_0x414a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A6Cu;
        // 0x414a70: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a6c) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414A74u;
label_414a74:
    // 0x414a74: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
label_414a78:
    if (ctx->pc == 0x414A78u) {
        ctx->pc = 0x414A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A74u;
        // 0x414a78: 0x8fa500f4  lw          $a1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A7Cu;
        goto label_414a7c;
    }
    ctx->pc = 0x414A74u;
    {
        const bool branch_taken_0x414a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x414A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A74u;
        // 0x414a78: 0x8fa500f4  lw          $a1, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a74) {
            ctx->pc = 0x414C0Cu;
            goto label_414c0c;
        }
    }
    ctx->pc = 0x414A7Cu;
label_414a7c:
    // 0x414a7c: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x414a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_414a80:
    // 0x414a80: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x414a80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_414a84:
    // 0x414a84: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x414a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414a88:
    // 0x414a88: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x414a88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414a8c:
    // 0x414a8c: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
label_414a90:
    if (ctx->pc == 0x414A90u) {
        ctx->pc = 0x414A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A8Cu;
        // 0x414a90: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414A94u;
        goto label_414a94;
    }
    ctx->pc = 0x414A8Cu;
    {
        const bool branch_taken_0x414a8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x414A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414A8Cu;
        // 0x414a90: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414a8c) {
            ctx->pc = 0x414AE8u;
            goto label_414ae8;
        }
    }
    ctx->pc = 0x414A94u;
label_414a94:
    // 0x414a94: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x414a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_414a98:
    // 0x414a98: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x414a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_414a9c:
    // 0x414a9c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x414a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_414aa0:
    // 0x414aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414aa4:
    // 0x414aa4: 0x40f809  jalr        $v0
label_414aa8:
    if (ctx->pc == 0x414AA8u) {
        ctx->pc = 0x414AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AA4u;
        // 0x414aa8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AACu;
        goto label_414aac;
    }
    ctx->pc = 0x414AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414AACu);
        ctx->pc = 0x414AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AA4u;
        // 0x414aa8: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414AA4u, 0x414AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414AACu;
label_414aac:
    // 0x414aac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x414aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414ab0:
    // 0x414ab0: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_414ab4:
    if (ctx->pc == 0x414AB4u) {
        ctx->pc = 0x414AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AB0u;
        // 0x414ab4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AB8u;
        goto label_414ab8;
    }
    ctx->pc = 0x414AB0u;
    {
        const bool branch_taken_0x414ab0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x414AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AB0u;
        // 0x414ab4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ab0) {
            ctx->pc = 0x414AE8u;
            goto label_414ae8;
        }
    }
    ctx->pc = 0x414AB8u;
label_414ab8:
    // 0x414ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x414ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414abc:
    // 0x414abc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x414abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_414ac0:
    // 0x414ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414ac4:
    // 0x414ac4: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x414ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_414ac8:
    // 0x414ac8: 0xc1035f6  jal         func_40D7D8
label_414acc:
    if (ctx->pc == 0x414ACCu) {
        ctx->pc = 0x414ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AC8u;
        // 0x414acc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AD0u;
        goto label_414ad0;
    }
    ctx->pc = 0x414AC8u;
    SET_GPR_U32(ctx, 31, 0x414AD0u);
    ctx->pc = 0x414ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414AC8u;
    // 0x414acc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x414AC8u, 0x414AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414AD0u;
label_414ad0:
    // 0x414ad0: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x414ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_414ad4:
    // 0x414ad4: 0xc103628  jal         func_40D8A0
label_414ad8:
    if (ctx->pc == 0x414AD8u) {
        ctx->pc = 0x414AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AD4u;
        // 0x414ad8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414ADCu;
        goto label_414adc;
    }
    ctx->pc = 0x414AD4u;
    SET_GPR_U32(ctx, 31, 0x414ADCu);
    ctx->pc = 0x414AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414AD4u;
    // 0x414ad8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x414AD4u, 0x414ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414ADCu;
label_414adc:
    // 0x414adc: 0x10000058  b           . + 4 + (0x58 << 2)
label_414ae0:
    if (ctx->pc == 0x414AE0u) {
        ctx->pc = 0x414AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414ADCu;
        // 0x414ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AE4u;
        goto label_414ae4;
    }
    ctx->pc = 0x414ADCu;
    {
        const bool branch_taken_0x414adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414ADCu;
        // 0x414ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414adc) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414AE4u;
label_414ae4:
    // 0x414ae4: 0x0  nop
    ctx->pc = 0x414ae4u;
    // NOP
label_414ae8:
    // 0x414ae8: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
label_414aec:
    if (ctx->pc == 0x414AECu) {
        ctx->pc = 0x414AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AE8u;
        // 0x414aec: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414AF0u;
        goto label_414af0;
    }
    ctx->pc = 0x414AE8u;
    {
        const bool branch_taken_0x414ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414AE8u;
        // 0x414aec: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ae8) {
            ctx->pc = 0x414C04u;
            goto label_414c04;
        }
    }
    ctx->pc = 0x414AF0u;
label_414af0:
    // 0x414af0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x414af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_414af4:
    // 0x414af4: 0x24170080  addiu       $s7, $zero, 0x80
    ctx->pc = 0x414af4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_414af8:
    // 0x414af8: 0x245ee880  addiu       $fp, $v0, -0x1780
    ctx->pc = 0x414af8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_414afc:
    // 0x414afc: 0x0  nop
    ctx->pc = 0x414afcu;
    // NOP
label_414b00:
    // 0x414b00: 0x2e420081  sltiu       $v0, $s2, 0x81
    ctx->pc = 0x414b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_414b04:
    // 0x414b04: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x414b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_414b08:
    // 0x414b08: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x414b08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_414b0c:
    // 0x414b0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x414b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_414b10:
    // 0x414b10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x414b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_414b14:
    // 0x414b14: 0xc10480a  jal         func_412028
label_414b18:
    if (ctx->pc == 0x414B18u) {
        ctx->pc = 0x414B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B14u;
        // 0x414b18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B1Cu;
        goto label_414b1c;
    }
    ctx->pc = 0x414B14u;
    SET_GPR_U32(ctx, 31, 0x414B1Cu);
    ctx->pc = 0x414B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414B14u;
    // 0x414b18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x414B14u, 0x414B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414B1Cu;
label_414b1c:
    // 0x414b1c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
label_414b20:
    if (ctx->pc == 0x414B20u) {
        ctx->pc = 0x414B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B1Cu;
        // 0x414b20: 0x24842  srl         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B24u;
        goto label_414b24;
    }
    ctx->pc = 0x414B1Cu;
    {
        const bool branch_taken_0x414b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x414B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B1Cu;
        // 0x414b20: 0x24842  srl         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b1c) {
            ctx->pc = 0x414B40u;
            goto label_414b40;
        }
    }
    ctx->pc = 0x414B24u;
label_414b24:
    // 0x414b24: 0x12c00046  beqz        $s6, . + 4 + (0x46 << 2)
label_414b28:
    if (ctx->pc == 0x414B28u) {
        ctx->pc = 0x414B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B24u;
        // 0x414b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B2Cu;
        goto label_414b2c;
    }
    ctx->pc = 0x414B24u;
    {
        const bool branch_taken_0x414b24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B24u;
        // 0x414b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b24) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414B2Cu;
label_414b2c:
    // 0x414b2c: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x414b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_414b30:
    // 0x414b30: 0x40f809  jalr        $v0
label_414b34:
    if (ctx->pc == 0x414B34u) {
        ctx->pc = 0x414B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B30u;
        // 0x414b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B38u;
        goto label_414b38;
    }
    ctx->pc = 0x414B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414B38u);
        ctx->pc = 0x414B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B30u;
        // 0x414b34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414B30u, 0x414B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414B38u;
label_414b38:
    // 0x414b38: 0x10000041  b           . + 4 + (0x41 << 2)
label_414b3c:
    if (ctx->pc == 0x414B3Cu) {
        ctx->pc = 0x414B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B38u;
        // 0x414b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B40u;
        goto label_414b40;
    }
    ctx->pc = 0x414B38u;
    {
        const bool branch_taken_0x414b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B38u;
        // 0x414b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b38) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414B40u;
label_414b40:
    // 0x414b40: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x414b40u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_414b44:
    // 0x414b44: 0x1120002d  beqz        $t1, . + 4 + (0x2D << 2)
label_414b48:
    if (ctx->pc == 0x414B48u) {
        ctx->pc = 0x414B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B44u;
        // 0x414b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B4Cu;
        goto label_414b4c;
    }
    ctx->pc = 0x414B44u;
    {
        const bool branch_taken_0x414b44 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B44u;
        // 0x414b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b44) {
            ctx->pc = 0x414BFCu;
            goto label_414bfc;
        }
    }
    ctx->pc = 0x414B4Cu;
label_414b4c:
    // 0x414b4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x414b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_414b50:
    // 0x414b50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x414b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414b54:
    // 0x414b54: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x414b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414b58:
    // 0x414b58: 0x19200012  blez        $t1, . + 4 + (0x12 << 2)
label_414b5c:
    if (ctx->pc == 0x414B5Cu) {
        ctx->pc = 0x414B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B58u;
        // 0x414b5c: 0x31240003  andi        $a0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B60u;
        goto label_414b60;
    }
    ctx->pc = 0x414B58u;
    {
        const bool branch_taken_0x414b58 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x414B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B58u;
        // 0x414b5c: 0x31240003  andi        $a0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b58) {
            ctx->pc = 0x414BA4u;
            goto label_414ba4;
        }
    }
    ctx->pc = 0x414B60u;
label_414b60:
    // 0x414b60: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_414b64:
    if (ctx->pc == 0x414B64u) {
        ctx->pc = 0x414B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B60u;
        // 0x414b64: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B68u;
        goto label_414b68;
    }
    ctx->pc = 0x414B60u;
    {
        const bool branch_taken_0x414b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B60u;
        // 0x414b64: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x414b60) {
            ctx->pc = 0x414BC0u;
            goto label_414bc0;
        }
    }
    ctx->pc = 0x414B68u;
label_414b68:
    // 0x414b68: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_414b6c:
    if (ctx->pc == 0x414B6Cu) {
        ctx->pc = 0x414B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B68u;
        // 0x414b6c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B70u;
        goto label_414b70;
    }
    ctx->pc = 0x414B68u;
    {
        const bool branch_taken_0x414b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414b68) {
            ctx->pc = 0x414B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414B68u;
            // 0x414b6c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414BA8u;
            goto label_414ba8;
        }
    }
    ctx->pc = 0x414B70u;
label_414b70:
    // 0x414b70: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x414b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_414b74:
    // 0x414b74: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_414b78:
    if (ctx->pc == 0x414B78u) {
        ctx->pc = 0x414B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414B74u;
        // 0x414b78: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414B7Cu;
        goto label_414b7c;
    }
    ctx->pc = 0x414B74u;
    {
        const bool branch_taken_0x414b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414b74) {
            ctx->pc = 0x414B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414B74u;
            // 0x414b78: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414B94u;
            goto label_414b94;
        }
    }
    ctx->pc = 0x414B7Cu;
label_414b7c:
    // 0x414b7c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x414b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_414b80:
    // 0x414b80: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x414b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_414b84:
    // 0x414b84: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x414b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_414b88:
    // 0x414b88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x414b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_414b8c:
    // 0x414b8c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x414b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_414b90:
    // 0x414b90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x414b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_414b94:
    // 0x414b94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x414b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_414b98:
    // 0x414b98: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x414b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_414b9c:
    // 0x414b9c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x414b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_414ba0:
    // 0x414ba0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x414ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_414ba4:
    // 0x414ba4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x414ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_414ba8:
    // 0x414ba8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x414ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_414bac:
    // 0x414bac: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x414bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_414bb0:
    // 0x414bb0: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x414bb0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_414bb4:
    // 0x414bb4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x414bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_414bb8:
    // 0x414bb8: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
label_414bbc:
    if (ctx->pc == 0x414BBCu) {
        ctx->pc = 0x414BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BB8u;
        // 0x414bbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414BC0u;
        goto label_414bc0;
    }
    ctx->pc = 0x414BB8u;
    {
        const bool branch_taken_0x414bb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x414BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BB8u;
        // 0x414bbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414bb8) {
            ctx->pc = 0x414BFCu;
            goto label_414bfc;
        }
    }
    ctx->pc = 0x414BC0u;
label_414bc0:
    // 0x414bc0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x414bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_414bc4:
    // 0x414bc4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x414bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_414bc8:
    // 0x414bc8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x414bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_414bcc:
    // 0x414bcc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x414bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_414bd0:
    // 0x414bd0: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x414bd0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_414bd4:
    // 0x414bd4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x414bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_414bd8:
    // 0x414bd8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x414bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_414bdc:
    // 0x414bdc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x414bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_414be0:
    // 0x414be0: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x414be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_414be4:
    // 0x414be4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x414be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_414be8:
    // 0x414be8: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x414be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_414bec:
    // 0x414bec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x414becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_414bf0:
    // 0x414bf0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x414bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_414bf4:
    // 0x414bf4: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
label_414bf8:
    if (ctx->pc == 0x414BF8u) {
        ctx->pc = 0x414BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BF4u;
        // 0x414bf8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414BFCu;
        goto label_414bfc;
    }
    ctx->pc = 0x414BF4u;
    {
        const bool branch_taken_0x414bf4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x414BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BF4u;
        // 0x414bf8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414bf4) {
            ctx->pc = 0x414BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414bc8;
        }
    }
    ctx->pc = 0x414BFCu;
label_414bfc:
    // 0x414bfc: 0x1640ffc0  bnez        $s2, . + 4 + (-0x40 << 2)
label_414c00:
    if (ctx->pc == 0x414C00u) {
        ctx->pc = 0x414C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BFCu;
        // 0x414c00: 0x2298821  addu        $s1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C04u;
        goto label_414c04;
    }
    ctx->pc = 0x414BFCu;
    {
        const bool branch_taken_0x414bfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x414C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414BFCu;
        // 0x414c00: 0x2298821  addu        $s1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414bfc) {
            ctx->pc = 0x414B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414b00;
        }
    }
    ctx->pc = 0x414C04u;
label_414c04:
    // 0x414c04: 0x1000000e  b           . + 4 + (0xE << 2)
label_414c08:
    if (ctx->pc == 0x414C08u) {
        ctx->pc = 0x414C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C04u;
        // 0x414c08: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C0Cu;
        goto label_414c0c;
    }
    ctx->pc = 0x414C04u;
    {
        const bool branch_taken_0x414c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C04u;
        // 0x414c08: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414c04) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414C0Cu;
label_414c0c:
    // 0x414c0c: 0xc1048ec  jal         func_4123B0
label_414c10:
    if (ctx->pc == 0x414C10u) {
        ctx->pc = 0x414C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C0Cu;
        // 0x414c10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C14u;
        goto label_414c14;
    }
    ctx->pc = 0x414C0Cu;
    SET_GPR_U32(ctx, 31, 0x414C14u);
    ctx->pc = 0x414C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414C0Cu;
    // 0x414c10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x414C0Cu, 0x414C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414C14u;
label_414c14:
    // 0x414c14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_414c18:
    if (ctx->pc == 0x414C18u) {
        ctx->pc = 0x414C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C14u;
        // 0x414c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C1Cu;
        goto label_414c1c;
    }
    ctx->pc = 0x414C14u;
    {
        const bool branch_taken_0x414c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C14u;
        // 0x414c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414c14) {
            ctx->pc = 0x414C40u;
            goto label_414c40;
        }
    }
    ctx->pc = 0x414C1Cu;
label_414c1c:
    // 0x414c1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x414c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_414c20:
    // 0x414c20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x414c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_414c24:
    // 0x414c24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x414c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414c28:
    // 0x414c28: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x414c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414c2c:
    // 0x414c2c: 0xc103490  jal         func_40D240
label_414c30:
    if (ctx->pc == 0x414C30u) {
        ctx->pc = 0x414C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C2Cu;
        // 0x414c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C34u;
        goto label_414c34;
    }
    ctx->pc = 0x414C2Cu;
    SET_GPR_U32(ctx, 31, 0x414C34u);
    ctx->pc = 0x414C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414C2Cu;
    // 0x414c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D240u, 0x414C2Cu, 0x414C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414C34u;
label_414c34:
    // 0x414c34: 0x1440ff22  bnez        $v0, . + 4 + (-0xDE << 2)
label_414c38:
    if (ctx->pc == 0x414C38u) {
        ctx->pc = 0x414C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C34u;
        // 0x414c38: 0x8fa300f8  lw          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C3Cu;
        goto label_414c3c;
    }
    ctx->pc = 0x414C34u;
    {
        const bool branch_taken_0x414c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C34u;
        // 0x414c38: 0x8fa300f8  lw          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414c34) {
            ctx->pc = 0x4148C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4148c0;
        }
    }
    ctx->pc = 0x414C3Cu;
label_414c3c:
    // 0x414c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x414c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414c40:
    // 0x414c40: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x414c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_414c44:
    // 0x414c44: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x414c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_414c48:
    // 0x414c48: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x414c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_414c4c:
    // 0x414c4c: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x414c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_414c50:
    // 0x414c50: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x414c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_414c54:
    // 0x414c54: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x414c54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_414c58:
    // 0x414c58: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x414c58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_414c5c:
    // 0x414c5c: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x414c5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_414c60:
    // 0x414c60: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x414c60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_414c64:
    // 0x414c64: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x414c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_414c68:
    // 0x414c68: 0x3e00008  jr          $ra
label_414c6c:
    if (ctx->pc == 0x414C6Cu) {
        ctx->pc = 0x414C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C68u;
        // 0x414c6c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414C70u;
        goto label_fallthrough_0x414c68;
    }
    ctx->pc = 0x414C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414C68u;
        // 0x414c6c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414c68:
    ctx->pc = 0x414C70u;
}
